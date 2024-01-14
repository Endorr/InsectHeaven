using System;
using UnityEngine;
using System.Collections.Generic;
using Unity.VisualScripting;

public enum InputAction
{
    Forward,
    Backward,
    Left,
    Right,
    InterAction,
    Run,
    Crunch,
    Jump
}

public class InputManager : ManagerBase
{
    public delegate void InputMove(float _Sensitivity);
    public delegate void InputMoveMultiDirection(float _Sensitivity);
    public delegate void HeightChanging(float _Speed, float _ObjectHeight);
    public delegate void Jump(float _JumpForce, ref List<InputAction> _Key);
    public delegate void InputKey();
    
    public static InputManager instance;
    Dictionary<InputAction, KeyCode> GameKeyMap;
    public InputMove MoveForward;
    public InputMove MoveBackward;
    public InputMove MoveLeft;
    public InputMove MoveRight;
    public InputMoveMultiDirection MoveFowardLeft;
    public InputMoveMultiDirection MoveFowardRight;
    public InputMoveMultiDirection MoveBackwardLeft;
    public InputMoveMultiDirection MoveBackwardRight;
    public HeightChanging CrunchIn;
    public HeightChanging CrunchOut;
    public Jump JumpStart;
    public Jump JumpMove;
    List<InputAction> JumpStartInputActionList = new List<InputAction>();
    public InputKey Interaction;
    public Camera mainCamera;

    private float CurrentYaw = 0.0f;
    private float CurrentPitch = 0.0f;
    private float PitchMin = -20.0f;
    private float PitchMax = 20.0f;
    
    private bool IsCrunch = false;
    private float HeightChangeDelay = 1.0f;
    private float CrunchDelay = 0.0f;
    private float CrunchHeight = 0.0f;
    private float NormalHeight = 0.0f;
    private bool IsJump = false;
    private float RotateSensitivity = 1.0f;
    private float MoveSpeed = 1.0f;

    public override void Awake()
    {
        instance = this;
        UseTick = true;
        SetDefaultKeyBinding();
    }

    public override void Tick()
    {
        IH_SceneManager SceneMng = (IH_SceneManager)GameManager.Instance.GetManager(EManagerType.Scene);

        string CurrentSceneType = SceneMng.GetCurrentSceneType();

        if ("Explore" == CurrentSceneType)
        {
            Tick_ExploreMode();
        }
        else if ("Combat" == CurrentSceneType)
        {
            Tick_Combat();
        }
    }

    void SetDefaultKeyBinding()
    {
        Cursor.lockState = CursorLockMode.Confined;
    
        if (null == GameKeyMap)
        {
            GameKeyMap = new Dictionary<InputAction, KeyCode>();
        }
        else
        {
            GameKeyMap.Clear();
        }
        
        GameKeyMap.Add(InputAction.Forward, KeyCode.W);
        GameKeyMap.Add(InputAction.Backward, KeyCode.S);
        GameKeyMap.Add(InputAction.Left, KeyCode.A);
        GameKeyMap.Add(InputAction.Right, KeyCode.D);
        GameKeyMap.Add(InputAction.InterAction, KeyCode.E);
        GameKeyMap.Add(InputAction.Run, KeyCode.LeftShift);
        GameKeyMap.Add(InputAction.Crunch, KeyCode.LeftControl);
        GameKeyMap.Add(InputAction.Jump, KeyCode.Space);

        MoveSpeed = GameManager.Instance.MoveSensitivity;
        RotateSensitivity = GameManager.Instance.RotateSensitivity;
        CrunchHeight = GameManager.Instance.CrunchHeight;
    }

    public void SetMainCamera()
    {
        mainCamera = Camera.main;
        
        if(mainCamera)
            NormalHeight = mainCamera.transform.position.y;
    }

    void Tick_ExploreMode()
    {
        //Camera Rotation
        {
            float AxisMouseHeight = Input.GetAxis("Mouse Y");
            float AxisMouseWidth = Input.GetAxis("Mouse X");

            CurrentYaw += AxisMouseWidth * RotateSensitivity;
            if (CurrentYaw >= 360.0f)
                CurrentYaw -= 360.0f;
            else if (CurrentYaw < 0)
                CurrentYaw += 360.0f;

            CurrentPitch += AxisMouseHeight * RotateSensitivity;
            if (CurrentPitch > PitchMax)
                CurrentPitch = PitchMax;
            else if (CurrentPitch < PitchMin)
                CurrentPitch = PitchMin;

            mainCamera.transform.localRotation =
                Quaternion.AngleAxis(CurrentYaw, Vector3.up) *
                Quaternion.AngleAxis(CurrentPitch * -1.0f, Vector3.right);
        }

        //Camera Movement
        {
            //Height Change Delay
            {
                if(CrunchDelay <= HeightChangeDelay)
                {
                    CrunchDelay += Time.deltaTime;
                }
            }

            if (true == IsJump)
            {
                JumpMove(GameManager.Instance.JumpForce, ref JumpStartInputActionList);
                return;
            }
            
            //Crunching
            {
                if (true == Input.GetKey(GameKeyMap[InputAction.Crunch]))
                {
                    if (CrunchDelay > HeightChangeDelay)
                    {
                        IsCrunch = !IsCrunch;
                        CrunchDelay = 0.0f;
                    }
                }
                
                float CurrentCameraHeight = mainCamera.transform.position.y;

                if (true == IsCrunch)
                {
                    if (CurrentCameraHeight > CrunchHeight)
                    {
                        CrunchIn(GameManager.Instance.CrunchingSpeed, CrunchHeight);
                    }
                }
                else
                {
                    if (CurrentCameraHeight < NormalHeight)
                    {
                        CrunchOut(GameManager.Instance.CrunchingSpeed, NormalHeight);
                    }
                }
            }
            
            //Jump
            {
                if (true == Input.GetKey(GameKeyMap[InputAction.Jump]))
                {
                    if (true == IsCrunch)
                    {
                        IsCrunch = !IsCrunch;
                    }
                    else if (false == IsJump)
                    {
                        IsJump = true;
                        
                        if (true == Input.GetKey(GameKeyMap[InputAction.Run]))
                        {
                            JumpStartInputActionList.Add(InputAction.Run); 
                        }

                        if (true == Input.GetKey(GameKeyMap[InputAction.Left]))
                        {
                            JumpStartInputActionList.Add(InputAction.Left);
                        }
                        else if (true == Input.GetKey(GameKeyMap[InputAction.Right]))
                        {
                            JumpStartInputActionList.Add(InputAction.Right);
                        }

                        if (true == Input.GetKey(GameKeyMap[InputAction.Forward]))
                        {
                            JumpStartInputActionList.Add(InputAction.Forward);
                        }
                        else if (true == Input.GetKey(GameKeyMap[InputAction.Backward]))
                        {
                            JumpStartInputActionList.Add(InputAction.Backward);
                        }
                        
                        JumpStart(GameManager.Instance.JumpForce, ref JumpStartInputActionList);
                        return;
                    }
                }
            }

            bool IsRunning = Input.GetKey(GameKeyMap[InputAction.Run]) && false == IsCrunch;
            MoveSpeed = GameManager.Instance.MoveSensitivity 
                        * ((NormalHeight != mainCamera.transform.position.y) ? GameManager.Instance.CrunchSlowLate : 1.0f);

            if (Input.GetKey(GameKeyMap[InputAction.Forward]) && null != MoveForward)
            {
                if (Input.GetKey(GameKeyMap[InputAction.Left]) && null != MoveFowardLeft)
                {
                    MoveSpeed *= GameManager.Instance.SideWalkSlowLate;
                    MoveFowardLeft(MoveSpeed * ((IsRunning) ? GameManager.Instance.RunningMultiplier : 1.0f));
                }
                else if (Input.GetKey(GameKeyMap[InputAction.Right]) && null != MoveFowardRight)
                {
                    MoveSpeed *= GameManager.Instance.SideWalkSlowLate;
                    MoveFowardRight(MoveSpeed * ((IsRunning) ? GameManager.Instance.RunningMultiplier : 1.0f));
                }
                else
                {
                    MoveForward(MoveSpeed * ((IsRunning) ? GameManager.Instance.RunningMultiplier : 1.0f));
                }
            }
            else if (Input.GetKey(GameKeyMap[InputAction.Backward]) && null != MoveBackward)
            {
                if (Input.GetKey(GameKeyMap[InputAction.Left]) && null != MoveBackwardLeft)
                {
                    MoveSpeed *= GameManager.Instance.SideWalkSlowLate;
                    MoveBackwardLeft(MoveSpeed * ((IsRunning) ? GameManager.Instance.RunningMultiplier : 1.0f));
                }
                else if (Input.GetKey(GameKeyMap[InputAction.Right]) && null != MoveBackwardRight)
                {
                    MoveSpeed *= GameManager.Instance.SideWalkSlowLate;
                    MoveBackwardRight(MoveSpeed * ((IsRunning) ? GameManager.Instance.RunningMultiplier : 1.0f));
                }
                else
                {
                    MoveBackward(MoveSpeed);
                }
            }
            else if (Input.GetKey(GameKeyMap[InputAction.Left]) && null != MoveLeft)
            {
                MoveLeft(MoveSpeed);
            }
            else if (Input.GetKey(GameKeyMap[InputAction.Right]) && null != MoveRight)
            {
                MoveRight(MoveSpeed);
            }
        }

        if (Input.GetKeyDown(GameKeyMap[InputAction.InterAction]))
        {
            Interaction();
        }
    }

    void Tick_Combat()
    {
        
    }

    public void JumpFinish()
    {
        Debug.Log("JumpFinish!");
        IsJump = false;
        JumpStartInputActionList.Clear();
    }
}
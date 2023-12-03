using System;
using UnityEngine;
using System.Collections.Generic;

public enum InputAction
{
    Forward,
    Backward,
    Left,
    Right,
    InterAction,
    AxisY
}

public class InputManager : ManagerBase
{
    public delegate void InputMove(float _Sensitivity);
    public delegate void InputKey();
    
    public static InputManager instance;
    Dictionary<InputAction, KeyCode> GameKeyMap;
    public InputMove MoveForward;
    public InputMove MoveBackward;
    public InputMove MoveLeft;
    public InputMove MoveRight;
    public InputKey Interaction;

    private float CurrentYaw = 0.0f;
    private float CurrentPitch = 0.0f;
    private float PitchMin = -20.0f;
    private float PitchMax = 20.0f;

    private float RotateSensitivity = 1.0f;
    private float MoveSensitivity = 1.0f;

    public override void Awake()
    {
        instance = this;
        UseTick = true;
        SetDefaultKeyBinding();
    }

    public override void Tick()
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
        
        //Camera.main.transform.eulerAngles += new Vector3(-AxisMouseY, AxisMouseX, 0);
        Camera.main.transform.localRotation =
            Quaternion.AngleAxis(CurrentYaw, Vector3.up) *
            Quaternion.AngleAxis(CurrentPitch * -1.0f, Vector3.right);
        

        if (Input.GetKey(GameKeyMap[InputAction.Forward]) && null != MoveForward)
        {
            MoveForward(MoveSensitivity);
        }
        else if (Input.GetKey(GameKeyMap[InputAction.Backward]) && null != MoveBackward)
        {
            MoveBackward(MoveSensitivity);
        }
        else if (Input.GetKey(GameKeyMap[InputAction.Left]) && null != MoveLeft)
        {
            MoveLeft(MoveSensitivity);
        }
        else if (Input.GetKey(GameKeyMap[InputAction.Right]) && null != MoveRight)
        {
            MoveRight(MoveSensitivity);
        }
        
        if (Input.GetKeyDown(GameKeyMap[InputAction.InterAction]))
        {
            Interaction();
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

        MoveSensitivity = GameManager.Instance.MoveSensitivity;
        RotateSensitivity = GameManager.Instance.RotateSensitivity;
    }
}
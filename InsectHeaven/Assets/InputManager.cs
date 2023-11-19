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
    public delegate void InputMove(Vector3 _Direction);
    public delegate void InputKey();
    
    public static InputManager instance;
    Dictionary<InputAction, KeyCode> GameKeyMap;
    public InputMove MoveForward;
    public InputMove MoveBackward;
    public InputMove MoveLeft;
    public InputMove MoveRight;
    public InputKey Interaction;

    private float Yaw = 0.0f;
    private float Pitch = 0.0f;
    
    private float PitchMin = -20.0f;
    private float PitchMax = 20.0f;

    public override void Awake()
    {
        instance = this;
        UseTick = true;
        
        SetDefaultKeyBinding();
    }

    public override void Tick()
    {
        Yaw +=  Input.GetAxis("Mouse X");
        Pitch +=  Input.GetAxis("Mouse Y");
        if (Pitch >= PitchMax)
            Pitch = PitchMax;
        else if (Pitch <= PitchMin)
            Pitch = PitchMin;
        
        Camera.main.transform.eulerAngles = new Vector3(Pitch * -1.0f, Yaw, 0.0f);
        Debug.Log(Yaw);
        
        if (Input.GetKey(GameKeyMap[InputAction.Forward]) && null != MoveForward)
        {
            MoveForward(Camera.main.transform.eulerAngles);
        }
        else if (Input.GetKey(GameKeyMap[InputAction.Backward]) && null != MoveBackward)
        {
            MoveBackward(Camera.main.transform.eulerAngles);
        }
        else if (Input.GetKey(GameKeyMap[InputAction.Left]) && null != MoveLeft)
        {
            MoveLeft(Camera.main.transform.eulerAngles);
        }
        else if (Input.GetKey(GameKeyMap[InputAction.Right]) && null != MoveRight)
        {
            MoveRight(Camera.main.transform.eulerAngles);
        }
        
        if (Input.GetKeyDown(GameKeyMap[InputAction.InterAction]))
        {
            Interaction();
        }
    }

    void SetDefaultKeyBinding()
    {
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
    }
}
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum EManagerType { Table, Scene, Widget, Input };

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    private Dictionary<EManagerType, ManagerBase> _managerList;
    
    [Header("Sensitivity")]
    public float RotateSensitivity = 1.0f;
    
    [Header("Sensitivity")]
    public float MoveSensitivity = 1.0f;
    
    [Header("Sensitivity")]
    public float RunningMultiplier = 1.5f;

    [Header("Sensitivity")] 
    public float CrunchHeight = 0.65f;

    [Header("Sensitivity")] 
    public float CrunchingSpeed = 1.0f;

    [Header("Sensitivity")]
    public float CrunchSlowLate = 0.1f;

    [Header("Sensitivity")]
    public float SideWalkSlowLate = 0.75f;

    [Header("Sensitivity")]
    public float JumpForce = 300.0f;

    [Header("Sensitivity")] 
    public float JumpingMoveSlowLate = 0.9f;

    void Awake()
    {
        Instance = this;
        DontDestroyOnLoad(this.gameObject);

        AwakeManager();
    }

    private void Update()
    {
        foreach (var manager in _managerList)
        {
            if(true == manager.Value.IsUsingTick())
                manager.Value.Tick();
        }
    }

    public void AwakeManager()
    {
        _managerList = new Dictionary<EManagerType, ManagerBase>();

        //Table -> Scene -> Input (순서 준수)
        //Make Manager
        _managerList.Add(EManagerType.Table ,new TableManager());
        _managerList.Add(EManagerType.Scene, new IH_SceneManager());
        _managerList.Add(EManagerType.Widget, new IH_WidgetManager());
        _managerList.Add(EManagerType.Input, new InputManager());
       
        //Initialize Manager
        foreach (var manager in _managerList)
        {
            manager.Value.Awake();
        }
    }

    public ManagerBase GetManager(EManagerType managerType)
    {
        ManagerBase targetManager;
        if (_managerList.TryGetValue(managerType, out targetManager))
        {
            return targetManager;
        }

        Debug.Assert(false);
        return _managerList[0];
    }
}

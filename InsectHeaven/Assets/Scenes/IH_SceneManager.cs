﻿using UnityEngine;
using UnityEngine.SceneManagement;

public enum ESceneType
{
    None,
    System,
    Explore,
    Combat
}


public class IH_SceneManager : ManagerBase
{
    public static IH_SceneManager instance;
    private int CurrentSceneID;
    private SceneDataSet CurrentSceneData;
    private int LastMainSceneID;
   
    public override void Awake()
    {
        instance = this;
        
        UseTick = true;
        CurrentSceneData = new SceneDataSet();
    }

    public void SetStartScene(int sceneId)
    {
        TableManager tableManager = (TableManager)GameManager.Instance.GetManager(EManagerType.Table);
        Mapper_Scene SceneMapper = (Mapper_Scene)tableManager.GetTableMapper(EMapper.Scene);

        CurrentSceneID = sceneId;
        SceneMapper.GetSceneData(CurrentSceneID, ref CurrentSceneData);
    }

    public void SceneChange(int sceneId)
    {
        TableManager tableManager = (TableManager)GameManager.Instance.GetManager(EManagerType.Table);
        Mapper_Scene SceneMapper = (Mapper_Scene)tableManager.GetTableMapper(EMapper.Scene);
        
        if (SceneMapper.GetSceneData(sceneId, ref CurrentSceneData))
        {
            string combatstring = ESceneType.Combat.ToString();
            if (false == CurrentSceneData.SceneType.Equals(combatstring))
                LastMainSceneID = sceneId;
            CurrentSceneID = sceneId;
            
            InputManager InputMng = (InputManager)GameManager.Instance.GetManager(EManagerType.Input);
            InputMng.MoveForward = null;
            InputMng.MoveBackward = null;
            InputMng.MoveForward = null;
            InputMng.MoveForward = null;

            string SceneChangLog = "Scene Change -" + CurrentSceneData.SceneName;
            Debug.Log(SceneChangLog);
            SceneManager.LoadScene(CurrentSceneData.SceneBasePath);
        }
    }

    public void ReturnToMainScene()
    {
        if (LastMainSceneID == CurrentSceneID)
        {
            return;
        }
        
        SceneChange(LastMainSceneID);
    }

    public string GetCurrentSceneType()
    {
        return CurrentSceneData.SceneType;
    }
}
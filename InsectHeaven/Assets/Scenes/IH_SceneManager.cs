using UnityEngine;
using UnityEngine.SceneManagement;

public enum ESceneType
{
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

    public void SetStartScene(int scneeId)
    {
        TableManager tableManager = (TableManager)GameManager.Instance.GetManager(EManagerType.Table);
        Mapper_Scene SceneMapper = (Mapper_Scene)tableManager.GetTableMapper(EMapper.Scene);

        CurrentSceneID = scneeId;
        SceneMapper.GetSceneData(CurrentSceneID, ref CurrentSceneData);
    }

    public void SceneChange(int sceneId)
    {
        TableManager tableManager = (TableManager)GameManager.Instance.GetManager(EManagerType.Table);
        Mapper_Scene SceneMapper = (Mapper_Scene)tableManager.GetTableMapper(EMapper.Scene);
        
        if (SceneMapper.GetSceneData(sceneId, ref CurrentSceneData))
        {
            if (ESceneType.Combat.ToString() != CurrentSceneData.SceneType)
                LastMainSceneID = sceneId;
            CurrentSceneID = sceneId;

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
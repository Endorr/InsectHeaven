using UnityEngine;

public class IH_WidgetManager : ManagerBase
{
    public static IH_WidgetManager instance;

    public override void Awake()
    {
        instance = this;
    }

    public void ButtonEventCall(int ButtonID)
    {
        IH_SceneManager SceneManager =(IH_SceneManager)GameManager.Instance.GetManager(EManagerType.Scene);
        
        if(ESceneType.Combat.ToString() == SceneManager.GetCurrentSceneType())
            SceneManager.ReturnToMainScene();
        else
            SceneManager.SceneChange(ButtonID);
    }
}
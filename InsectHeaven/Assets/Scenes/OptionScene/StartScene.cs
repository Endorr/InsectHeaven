using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartScene : SceneBase
{
    private int frame;
    
    // Start is called before the first frame update
    void Start()
    {
       GameManager.Instance.AwakeManager();

       IH_SceneManager sceneManager = (IH_SceneManager)GameManager.Instance.GetManager(EManagerType.Scene);
       sceneManager.SetStartScene(1001);
    }

    // Update is called once per frame
    void Update()
    {
    }
}

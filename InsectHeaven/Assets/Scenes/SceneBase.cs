using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneBase : MonoBehaviour
{
    protected int SceneID = 0;
    protected bool IsInitTick = true;
    
    // Start is called before the first frame update
    protected void Start()
    {
        IsInitTick = true;
    }

    // Update is called once per frame
    protected void Update()
    {
        if (true == IsInitTick)
        {
            InitTick();
            IsInitTick = false;
        }
    }

    public virtual void InitTick()
    {
        InputManager InputMng = (InputManager)(GameManager.Instance.GetManager(EManagerType.Input));
        InputMng.SetMainCamera();
    }

    public void ButtonEvent(int EventID)
    {
        IH_WidgetManager WidgetMng = (IH_WidgetManager)GameManager.Instance.GetManager(EManagerType.Widget);
        WidgetMng.ButtonEventCall(EventID);
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneBase : MonoBehaviour
{
    protected int SceneID = 0;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }
    
    public void ButtonEvent(int EventID)
    {
        IH_WidgetManager WidgetMng = (IH_WidgetManager)GameManager.Instance.GetManager(EManagerType.Widget);
        WidgetMng.ButtonEventCall(EventID);
    }
}

using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    
    void Awake()
    {
        instance = this;
        DontDestroyOnLoad(this.gameObject);
        
        AwakeManager();
    }

    void AwakeManager()
    {
        TableManager.instance.Awake(); //Table Manager
    }
}

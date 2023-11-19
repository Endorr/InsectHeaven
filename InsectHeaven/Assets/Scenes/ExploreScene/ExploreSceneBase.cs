using UnityEngine;

public class ExploreSceneBase : SceneBase
{
    // Start is called before the first frame update
    protected void Start()
    {
        InputManager InputMng = (InputManager)GameManager.Instance.GetManager(EManagerType.Input);
        InputMng.MoveForward += MoveForward;
        InputMng.MoveBackward += MoveBackward;
        InputMng.MoveLeft += MoveLeft;
        InputMng.MoveRight += MoveRight;
    }
    
    protected void Finish()
    {
        InputManager InputMng = (InputManager)GameManager.Instance.GetManager(EManagerType.Input);
        InputMng.MoveForward -= MoveForward;
        InputMng.MoveBackward -= MoveBackward;
        InputMng.MoveLeft -= MoveLeft;
        InputMng.MoveRight -= MoveRight;
    }

    void MoveForward(Vector3 _Direction)
    {
        Camera.main.transform.Translate(Camera.main.transform.forward * Time.deltaTime);
    }
    
    void MoveBackward(Vector3 _Direction)
    {
        Camera.main.transform.Translate(Camera.main.transform.forward * Time.deltaTime * -1.0f);
    }
    
    void MoveLeft(Vector3 _Direction)
    {
        Camera.main.transform.Translate(Camera.main.transform.right * Time.deltaTime * -1.0f);
    }
    
    void MoveRight(Vector3 _Direction)
    {
        Camera.main.transform.Translate(Camera.main.transform.right * Time.deltaTime);
    }
}
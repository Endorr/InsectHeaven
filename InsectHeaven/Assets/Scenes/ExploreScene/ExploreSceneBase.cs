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

    void MoveForward(float _MoveSensitivity)
    {
        Vector3 MoveVector = Vector3.forward * _MoveSensitivity;
        MoveVector.y = 0.0f;
        Camera.main.transform.Translate(MoveVector * Time.deltaTime);

    }
    
    void MoveBackward(float _MoveSensitivity)
    {
        Vector3 MoveVector = Vector3.back * _MoveSensitivity;
        MoveVector.y = 0.0f;
        Camera.main.transform.Translate(MoveVector * Time.deltaTime);
    }
    
    void MoveLeft(float _MoveSensitivity)
    {
        Vector3 MoveVector = Vector3.left * _MoveSensitivity;
        MoveVector.y = 0.0f;
        Camera.main.transform.Translate(MoveVector * Time.deltaTime);
    }
    
    void MoveRight(float _MoveSensitivity)
    {
        Vector3 MoveVector = Vector3.right * _MoveSensitivity;
        MoveVector.y = 0.0f;
        Camera.main.transform.Translate(MoveVector * Time.deltaTime);
    }
}
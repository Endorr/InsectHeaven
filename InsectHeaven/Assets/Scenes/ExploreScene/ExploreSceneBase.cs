using UnityEngine;

public class ExploreSceneBase : SceneBase
{
    public Camera mainCamera;
    
    // Start is called before the first frame update
    protected new void Start()
    {
        base.Start();
        
        mainCamera = Camera.main;

        InputManager InputMng = (InputManager)GameManager.Instance.GetManager(EManagerType.Input);
        InputMng.SetMainCamera();
        InputMng.MoveForward += MoveForward;
        InputMng.MoveBackward += MoveBackward;
        InputMng.MoveLeft += MoveLeft;
        InputMng.MoveRight += MoveRight;
        InputMng.CrunchIn += CrunchIn;
        InputMng.CrunchOut += CrunchOut;
    }

    protected new void Update()
    {
        base.Update();
    }

    protected void Finish()
    {
        InputManager InputMng = (InputManager)GameManager.Instance.GetManager(EManagerType.Input);
        InputMng.MoveForward -= MoveForward;
        InputMng.MoveBackward -= MoveBackward;
        InputMng.MoveLeft -= MoveLeft;
        InputMng.MoveRight -= MoveRight;
        InputMng.CrunchIn -= CrunchIn;
        InputMng.CrunchOut -= CrunchOut;
    }

    void MoveForward(float _MoveSensitivity)
    {
        float Height = mainCamera.transform.position.y;
        Vector3 MoveVector = Vector3.forward * _MoveSensitivity;
        MoveVector.y = 0.0f;
        mainCamera.transform.Translate(MoveVector * Time.deltaTime);
        Vector3 PositionVector;
        Quaternion RotateQuat;
        mainCamera.transform.GetPositionAndRotation(out PositionVector, out RotateQuat);
        PositionVector.y = Height;
        mainCamera.transform.SetPositionAndRotation(PositionVector, RotateQuat);
    }
    
    void MoveBackward(float _MoveSensitivity)
    {
        float Height = mainCamera.transform.position.y;
        Vector3 MoveVector = Vector3.back * _MoveSensitivity;
        MoveVector.y = 0.0f;
        mainCamera.transform.Translate(MoveVector * Time.deltaTime);
        Vector3 PositionVector;
        Quaternion RotateQuat;
        mainCamera.transform.GetPositionAndRotation(out PositionVector, out RotateQuat);
        PositionVector.y = Height;
        mainCamera.transform.SetPositionAndRotation(PositionVector, RotateQuat);
    }
    
    void MoveLeft(float _MoveSensitivity)
    {
        Vector3 MoveVector = Vector3.left * _MoveSensitivity;
        MoveVector.y = 0.0f;
        mainCamera.transform.Translate(MoveVector * Time.deltaTime);
    }
    
    void MoveRight(float _MoveSensitivity)
    {
        Vector3 MoveVector = Vector3.right * _MoveSensitivity;
        MoveVector.y = 0.0f;
        mainCamera.transform.Translate(MoveVector * Time.deltaTime);
    }

    void CrunchIn(float _CrunchSpeed, float _CrunchHeight)
    {
        Vector3 PositionVector;
        Quaternion RotateQuat;
        mainCamera.transform.GetPositionAndRotation(out PositionVector, out RotateQuat);
        PositionVector.y -= Time.deltaTime * _CrunchSpeed;
        if (PositionVector.y < _CrunchHeight)
            PositionVector.y = _CrunchHeight;
        mainCamera.transform.SetPositionAndRotation(PositionVector, RotateQuat);
    }
    
    void CrunchOut(float _CrunchSpeed, float _NormalHeight)
    {
        Vector3 PositionVector;
        Quaternion RotateQuat;
        mainCamera.transform.GetPositionAndRotation(out PositionVector, out RotateQuat);
        PositionVector.y += Time.deltaTime * _CrunchSpeed;
        if (PositionVector.y > _NormalHeight)
            PositionVector.y = _NormalHeight;
        mainCamera.transform.SetPositionAndRotation(PositionVector, RotateQuat);
    }
}
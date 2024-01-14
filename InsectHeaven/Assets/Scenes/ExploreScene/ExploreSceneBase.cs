using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor.PackageManager;
using UnityEngine;

public class ExploreSceneBase : SceneBase
{
    public Camera mainCamera;
    protected Rigidbody CameraRigidbody;
    protected LayerMask groundLayer;
    protected float groundCheckDistance = 0.1f;
    protected bool IsJumping = false;
    
    // Start is called before the first frame update
    protected new void Start()
    {
        base.Start();
        
        mainCamera = Camera.main;
        CameraRigidbody = mainCamera.gameObject.GetComponent<Rigidbody>();
        groundLayer.value = LayerMask.NameToLayer("Ground");

        InputManager InputMng = (InputManager)GameManager.Instance.GetManager(EManagerType.Input);
        InputMng.SetMainCamera();
        InputMng.MoveForward += MoveForward;
        InputMng.MoveBackward += MoveBackward;
        InputMng.MoveLeft += MoveLeft;
        InputMng.MoveRight += MoveRight;
        InputMng.MoveFowardLeft += MoveForwardLeft;
        InputMng.MoveFowardRight += MoveForwardRight;
        InputMng.MoveBackwardLeft += MoveBackwardLeft;
        InputMng.MoveBackwardRight += MoveBackwardRight;
        InputMng.CrunchIn += CrunchIn;
        InputMng.CrunchOut += CrunchOut;
        InputMng.JumpStart += Jump;
        InputMng.JumpMove += JumpMove;
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
        InputMng.JumpStart -= Jump;
        InputMng.JumpMove -= JumpMove;
        InputMng.MoveFowardLeft -= MoveForwardLeft;
        InputMng.MoveFowardRight -= MoveForwardRight;
        InputMng.MoveBackwardLeft -= MoveBackwardLeft;
        InputMng.MoveBackwardRight -= MoveBackwardRight;
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
    
    void MoveForwardLeft(float _MoveSensitivity)
    {
        float Height = mainCamera.transform.position.y;
        Vector3 NewDirection = Vector3.forward + Vector3.left;
        Vector3 MoveVector =  NewDirection.normalized * _MoveSensitivity;
        MoveVector.y = 0.0f;
        mainCamera.transform.Translate(MoveVector * Time.deltaTime);
        Vector3 PositionVector;
        Quaternion RotateQuat;
        mainCamera.transform.GetPositionAndRotation(out PositionVector, out RotateQuat);
        PositionVector.y = Height;
        mainCamera.transform.SetPositionAndRotation(PositionVector, RotateQuat);
    }
    
    void MoveForwardRight(float _MoveSensitivity)
    {
        float Height = mainCamera.transform.position.y;
        Vector3 NewDirection = Vector3.forward + Vector3.right;
        Vector3 MoveVector =  NewDirection.normalized * _MoveSensitivity;
        MoveVector.y = 0.0f;
        mainCamera.transform.Translate(MoveVector * Time.deltaTime);
        Vector3 PositionVector;
        Quaternion RotateQuat;
        mainCamera.transform.GetPositionAndRotation(out PositionVector, out RotateQuat);
        PositionVector.y = Height;
        mainCamera.transform.SetPositionAndRotation(PositionVector, RotateQuat);
    }
    
    void MoveBackwardLeft(float _MoveSensitivity)
    {
        float Height = mainCamera.transform.position.y;
        Vector3 NewDirection = Vector3.back + Vector3.left;
        Vector3 MoveVector =  NewDirection.normalized * _MoveSensitivity;
        MoveVector.y = 0.0f;
        mainCamera.transform.Translate(MoveVector * Time.deltaTime);
        Vector3 PositionVector;
        Quaternion RotateQuat;
        mainCamera.transform.GetPositionAndRotation(out PositionVector, out RotateQuat);
        PositionVector.y = Height;
        mainCamera.transform.SetPositionAndRotation(PositionVector, RotateQuat);
    }
    
    void MoveBackwardRight(float _MoveSensitivity)
    {
        float Height = mainCamera.transform.position.y;
        Vector3 NewDirection = Vector3.back + Vector3.right;
        Vector3 MoveVector =  NewDirection.normalized * _MoveSensitivity;
        MoveVector.y = 0.0f;
        mainCamera.transform.Translate(MoveVector * Time.deltaTime);
        Vector3 PositionVector;
        Quaternion RotateQuat;
        mainCamera.transform.GetPositionAndRotation(out PositionVector, out RotateQuat);
        PositionVector.y = Height;
        mainCamera.transform.SetPositionAndRotation(PositionVector, RotateQuat);
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

    void Jump(float _JumpForce, ref List<InputAction> _ActionList)
    {
        IsJumping = true;
        Vector3 JumpVector = new Vector3(0.0f, GameManager.Instance.JumpForce, 0.0f);
        
        if (CameraRigidbody)
        {
            CameraRigidbody.AddForce(JumpVector);
            Debug.Log("JumpStart!");
        }
    }

    void JumpMove(float _JumpForce, ref List<InputAction> _ActionList)
    {
        bool IsWhileRunning = _ActionList.Contains(InputAction.Run);
        float MoveSensitivity = GameManager.Instance.MoveSensitivity * ((IsWhileRunning) ? GameManager.Instance.RunningMultiplier : 1.0f);
        MoveSensitivity *= GameManager.Instance.JumpingMoveSlowLate;

        if (true == _ActionList.Contains(InputAction.Forward))
        {
            if (true == _ActionList.Contains(InputAction.Left))
            {
                MoveForwardLeft(MoveSensitivity);
            }
            else if (true == _ActionList.Contains(InputAction.Right))
            {
                MoveForwardRight(MoveSensitivity);
            }
            else
            {
                MoveForward(MoveSensitivity);
            }
        }
        else if (true == _ActionList.Contains(InputAction.Backward))
        {
            if (true == _ActionList.Contains(InputAction.Left))
            {
                MoveBackwardLeft(MoveSensitivity);
            }
            else if (true == _ActionList.Contains(InputAction.Right))
            {
                MoveBackwardRight(MoveSensitivity);
            }
            else
            {
                MoveBackward(MoveSensitivity);
            }
        }
        else if (true == _ActionList.Contains(InputAction.Left))
        {
            MoveLeft(MoveSensitivity);
        }
        else if (true == _ActionList.Contains(InputAction.Right))
        {
            MoveRight(MoveSensitivity);
        }
    }

    private void OnCollisionEnter(Collision other)
    {
        if (true == IsJumping)
        {
            if (other.gameObject.CompareTag("Ground"))
            {
                IsJumping = false;
                InputManager InputMng = (InputManager)GameManager.Instance.GetManager(EManagerType.Input);
                InputMng.JumpFinish();
            }
        }
    }
}
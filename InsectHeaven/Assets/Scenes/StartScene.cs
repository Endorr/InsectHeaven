using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartScene : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        TestCase = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(0 == TestCase % 60)
        {
            TestCase = 0;
        }
        else
        {
            TestCase++;
        }
    }

    int TestCase = 0;
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class View : MonoBehaviour
{
    public ViewSO viewData;

    public GameObject container_Top;
    public GameObject container_Center;
    public GameObject container_Bottom;

    private Image imageTop;
    private Image imageCenter;
    private Image imageBottom;

    private VerticalLayoutGroup verticalLayoutGroup;
    
    // Start is called before the first frame update
    void Start()
    {
        Init();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Init()
    {
        Setup();
        Configure();
    }

    public void Setup()
    {
        verticalLayoutGroup = GetComponent<VerticalLayoutGroup>();
        imageTop = container_Top.GetComponent<Image>();
        imageCenter = container_Center.GetComponent<Image>();
        imageBottom = container_Bottom.GetComponent<Image>();
    }

    public void Configure()
    {
        if (viewData)
        {
            verticalLayoutGroup.padding = viewData.padding;
            verticalLayoutGroup.spacing = viewData.spacing;

            imageTop.color = viewData.theme.primary_bg;
            imageCenter.color = viewData.theme.secondary_bg;
            imageBottom.color = viewData.theme.teriary_bg;
        }
    }

    private void OnValidate()
    {
        Init();
    }
}

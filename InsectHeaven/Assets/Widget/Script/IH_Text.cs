using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using IH;

public class IH_Text : MonoBehaviour
{
    public IH_TextSO textData;
    [SerializeField]
    public WidgetStyle style;
    
    private TextMeshProUGUI textMeshProUGUI;

    // Start is called before the first frame update
    void Start()
    {
        Init();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void Init()
    {
        Setup();
        Configure();
    }

    private void Setup()
    {
        textMeshProUGUI = GetComponentInChildren<TextMeshProUGUI>();
    }

    private void Configure()
    {
        textMeshProUGUI.color = textData.theme.GetTextColor(style);
        textMeshProUGUI.font = textData.font;
        textMeshProUGUI.fontSize = textData.size;
    }

    private void OnValidate()
    {
        Init();
    }
}

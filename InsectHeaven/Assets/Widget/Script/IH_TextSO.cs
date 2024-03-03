using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

[CreateAssetMenu(menuName = "CustomUI/TextSO", fileName = "Text")]
public class IH_TextSO : ScriptableObject
{
   public ThemeSO theme;

   public TMP_FontAsset font;
   public float size;
}

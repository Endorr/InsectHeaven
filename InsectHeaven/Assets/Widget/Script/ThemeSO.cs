using System.Collections;
using System.Collections.Generic;
using IH;
using UnityEngine;

[CreateAssetMenu(menuName = "CustomUI/ThemeSO", fileName = "Theme")]
public class ThemeSO : ScriptableObject
{
    [Header("Primary")] 
    public Color primary_bg;
    public Color primary_text;
    
    [Header("Secondary")]
    public Color secondary_bg;
    public Color secondary_text;

    [Header("Tertiary")] 
    public Color teriary_bg;
    public Color teriary_text;

    [Header("other")] 
    public Color disable;

    public Color GetBackgroundColor(WidgetStyle style)
    {
        if (WidgetStyle.Primary == style)
        {
            return primary_bg;
        }
        else if (WidgetStyle.Secondary == style)
        {
            return secondary_bg;
        }
        else if (WidgetStyle.Tertiary == style)
        {
            return teriary_bg;
        }

        return disable;
    }
    
    public Color GetTextColor(WidgetStyle style)
    {
        if (WidgetStyle.Primary == style)
        {
            return primary_text;
        }
        else if (WidgetStyle.Secondary == style)
        {
            return secondary_text;
        }
        else if (WidgetStyle.Tertiary == style)
        {
            return teriary_text;
        }
        else if (WidgetStyle.Disable == style)
        {
            return disable;
        }

        return disable;
    }
}

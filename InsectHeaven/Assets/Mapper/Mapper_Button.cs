using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

public struct ButtonDataSet
{
    public string ButtonName;
    public string ButtonBase;
    public string ButtonType;
    public string ButtonType2;
    public List<string> SceneType;
}

public class Mapper_Button : DefaultMapper
{
    private Dictionary<int, ButtonDataSet> Map_Button;
    private ButtonDataSet NewDataSetSet;

    public override void Initialize()
    {
        base.Initialize();

        Map_Button = new Dictionary<int, ButtonDataSet>();
        NewDataSetSet = new ButtonDataSet();
        
        ReadData<ButtonDataSet>(PathReplacer("Button"), ref Map_Button, ref NewDataSetSet);
    }

    protected override void ResetData()
    {
        NewDataSetSet.ButtonName = null;
        NewDataSetSet.ButtonBase = null;
        NewDataSetSet.ButtonType = null;
        NewDataSetSet.ButtonType2 = null;
        NewDataSetSet.SceneType = new List<string>();
    }

    protected override void FillData(string DataString, bool _IsArrayData = false)
    {
        if (false == _IsArrayData)
        {
            if (null == NewDataSetSet.ButtonName)
            {
                NewDataSetSet.ButtonName = DataString;
            }
            else if (null == NewDataSetSet.ButtonBase)
            {
                NewDataSetSet.ButtonBase = DataString;
            }
            else if (null == NewDataSetSet.ButtonType)
            {
                NewDataSetSet.ButtonType = DataString;
            }
            else if (null == NewDataSetSet.ButtonType2)
            {
                NewDataSetSet.ButtonType2 = DataString;
            }
            else
            {
                NewDataSetSet.SceneType.Add(DataString);
            }
        }
        else
        {
            if (null != NewDataSetSet.SceneType)
            {
                NewDataSetSet.SceneType.Add(DataString);
            }
        }
    }
}
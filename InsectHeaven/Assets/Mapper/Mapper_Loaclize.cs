using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

enum LanguageLegion { Korea, English};

public struct LocalizeDataSet
{
    public string Kr;
    public string Eng;
}

public class Mapper_Loaclize : DefaultMapper
{
    //Data
    LanguageLegion Legion;
    private Dictionary<int, LocalizeDataSet> Map_Localize;
    private LocalizeDataSet NewDataSet;

    public override void Initialize()
    {
        base.Initialize();
        
        Map_Localize = new Dictionary<int, LocalizeDataSet>();
        NewDataSet = new LocalizeDataSet();
        
        ReadData<LocalizeDataSet>(PathReplacer("Localize"), ref Map_Localize, ref NewDataSet);
        
        Legion = LanguageLegion.Korea;
    }

    protected override void ResetData()
    {
        NewDataSet.Kr = null;
        NewDataSet.Eng = null;
    }

    protected override void FillData(string DataString)
    {
        if (null == NewDataSet.Kr)
        {
            NewDataSet.Kr = DataString;
        }
        else if (null == NewDataSet.Eng)
        {
            DataString = DataString.Remove(DataString.Length - 1);
            NewDataSet.Eng = DataString;
        }
    }

    public string GetLocalString(int _key)
    {
        if (Map_Localize.ContainsKey(_key))
        {
            if (LanguageLegion.Korea == Legion)
            {
                return Map_Localize[_key].Kr;
            }
            else if (LanguageLegion.English == Legion)
            {
                return Map_Localize[_key].Eng;
            }
        }

        return "Missing String";
    }
}

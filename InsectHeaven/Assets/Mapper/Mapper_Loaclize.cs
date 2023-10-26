using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;

enum LanguageLegion { Korea, English};

public struct LocalizeDataSet
{
    public int Key;
    public string Kr;
    public string Eng;
}

public class Mapper_Loaclize : DefaultMapper
{
    //Data
    string JsonFilePath = Application.dataPath + "DataTable/" + "Localize" + ".Json";
    LanguageLegion Legion;
    //map DataSet;

    // Start is called before the first frame update
    void Start()
    {
        Legion = LanguageLegion.Korea;
        
        Initialize();
    }

    protected override void Initialize()
    {
        FileStream fileStream = new FileStream(JsonFilePath, FileMode.Open);
        byte[] data = new byte[fileStream.Length];
        fileStream.Read(data, 0, data.Length);
        fileStream.Close();
        string json = Encoding.UTF8.GetString(data);

        LocalizeDataSet Test = JsonUtility.FromJson<LocalizeDataSet>(json);
        Debug.Log(Test.Key);
        Debug.Log(Test.Kr);
        Debug.Log(Test.Eng);
    }

    public override bool GetRowData<T>(int _Key, ref T _RowData)
    {
        switch (Legion)
        {
            case LanguageLegion.Korea:
                return true;
            case LanguageLegion.English:
                return false;
        }

        Debug.Log("No Legion or Key");
        return false;
    }
}

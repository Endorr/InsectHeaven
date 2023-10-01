using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
   using System.Text;

enum LanguageLegion { Korea, English};

struct LocalizeDataSet
{
    int Key;
    string Kr;
    string Eng;
}

public class Mapper_Loaclize : MonoBehaviour
{
    //Data
    string JsonFilePath = Application.dataPath + "DataTable/" + "Localize" + ".Json";
    LanguageLegion Legion;
    ArrayList DataSet;

    // Start is called before the first frame update
    void Start()
    {
        Legion = LanguageLegion.Korea;
    }

    void DataLoad()
    {
        FileStream fileStream = new FileStream(JsonFilePath, FileMode.Open);
        
    }

    string GetLocalizeString(int Key)
    {
        switch (Legion)
        {
            case LanguageLegion.Korea:
                return "";
            case LanguageLegion.English:
                return "";
        }

        return "No Legion or Key";
    }
}

using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

public struct SceneDataSet
{
    public int SceneName;
    public string SceneBasePath;
    public string SceneType;
}

public class Mapper_Scene : DefaultMapper
{
    private Dictionary<int, SceneDataSet> Map_Scene;
    private SceneDataSet NewDatSet;

    public override void Initialize()
    {
        base.Initialize();

        Map_Scene = new Dictionary<int, SceneDataSet>();
        NewDatSet = new SceneDataSet();
        
        ReadData<SceneDataSet>(PathReplacer("Scene"), ref Map_Scene, ref NewDatSet);
    }

    protected override void ResetData()
    {
        NewDatSet.SceneName = Index_None;
        NewDatSet.SceneBasePath = null;
        NewDatSet.SceneType = null;
    }

    protected override void FillData(string DataString, bool _IsArrayData)
    {
        if (Index_None == NewDatSet.SceneName)
        {
            NewDatSet.SceneName = Int32.Parse(DataString);
        }
        else if (null == NewDatSet.SceneBasePath)
        {
            NewDatSet.SceneBasePath = DataString;
        }
        else if (null == NewDatSet.SceneType)
        {
            DataString = DataString.Remove(DataString.Length - 1);
            NewDatSet.SceneType = DataString;
        }
    }

    public bool GetSceneData(int key, ref SceneDataSet targetData)
    {
        if (Map_Scene.TryGetValue(key, out targetData))
        {
            return true;
        }

        return false;
    }
}
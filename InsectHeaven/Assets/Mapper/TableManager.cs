using UnityEngine;
using System.Collections.Generic;

public enum EMapper
{
    Localize,
    Scene
}

public class TableManager : ManagerBase
{
    public static TableManager instance;
    Dictionary<EMapper, DefaultMapper> MapperDictionary;

    public override void Awake()
    {
        instance = this;

        FillTableMapper();
    }

    public DefaultMapper GetTableMapper(EMapper _MapperName)
    {
        if (MapperDictionary.ContainsKey(_MapperName))
        {
            return MapperDictionary[_MapperName];
        }
        
        Debug.Assert(false);
        return MapperDictionary[EMapper.Localize];
    }

    void FillTableMapper()
    {
        MapperDictionary = new Dictionary<EMapper, DefaultMapper>();
        
        MapperDictionary.Add(EMapper.Localize, new Mapper_Loaclize());
        MapperDictionary.Add(EMapper.Scene, new Mapper_Scene());

        foreach (var mapper in MapperDictionary)
        {
            mapper.Value.Initialize();
        }
    }
}
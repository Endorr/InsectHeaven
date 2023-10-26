using UnityEngine;
using System.Collections.Generic;

public enum EMapper
{
    Localize
}

public class TableManager : MonoBehaviour
{
    public static TableManager instance;
    Dictionary<EMapper, DefaultMapper> MapperDictionary;

    public void Awake()
    {
        instance = this;
        DontDestroyOnLoad(this.gameObject);
        
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
        MapperDictionary.Add(EMapper.Localize, new Mapper_Loaclize());
    }
}
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using UnityEngine;

public abstract class DefaultMapper
{
    protected string tableDataPath;
    protected int Index_None = -1;

    public virtual void Initialize()
    {
        tableDataPath = Application.dataPath + "/DataTable/{0}.Json";
    }

    protected void ReadData<T>(string tablePath, ref Dictionary<int, T> dictionary, ref T NewDataSet)
    {
        ResetData();
        
        FileStream fileStream = new FileStream(tablePath, FileMode.Open);
        byte[] data = new byte[fileStream.Length];
        fileStream.Read(data, 0, data.Length);
        fileStream.Close();
        string json = Encoding.UTF8.GetString(data);
        
        json = Regex.Replace(json, "\\r\\n", "");
        json = Regex.Replace(json, "\"", "");
        
        bool DataSetReadStart = false;
        bool IsDataSection = false;
        bool DataReadStart = false;
        string DataString = null;
        int key = 0;

        foreach (char text in json)
        {
            if ('{' == text)
            {
                DataSetReadStart = true;
            }
            else if ('}' == text && true == DataSetReadStart)
            {
                if (true == IsDataSection)
                {
                    IsDataSection = false;

                    FillData(DataString);
                    DataString = null;
                }
                
                AddToDictionary(ref dictionary, key, NewDataSet);
                
                DataSetReadStart = false;
                
                key = 0;
            }
            else if (':' == text)
            {
                IsDataSection = true;
            }
            else if (',' == text && true == IsDataSection)
            {
                IsDataSection = false;

                if (0 == key)
                {
                    key = Int32.Parse(DataString);
                }
                else
                {
                    FillData(DataString);
                }

                DataString = null;
            }
            else if (true == IsDataSection)
            {
                if (null == DataString && ' ' == text)
                    continue;
                
                DataString += text;
            }
        }
    }

    protected string PathReplacer(string tableName)
    {
        return tableDataPath.Replace("{0}", tableName);
    }

    protected void AddToDictionary<T>(ref Dictionary<int, T> dictionary,int key, T value)
    {
        dictionary.TryAdd(key, value);
        ResetData();
    }

    protected abstract void ResetData();

    protected abstract void FillData(string DataString);
}
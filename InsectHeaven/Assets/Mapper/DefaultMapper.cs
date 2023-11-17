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
                AddToDictionary(ref dictionary, key, NewDataSet);
                
                DataSetReadStart = false;
                
                key = 0;
            }
            else if (':' == text) 
            {
                IsDataSection = true;
            }
            else if ('"' == text)
            {
                if (true == IsDataSection)
                {
                    if (false == DataReadStart)
                    {
                        DataReadStart = true;
                        DataString = null;
                    }
                    else
                    {
                        DataReadStart = false;
                        IsDataSection = false;
                    
                        FillData(DataString);
                        DataString = null;
                    }
                }
            }
            else if (',' == text)
            {
                if (true == DataReadStart)
                {
                    if (0 == key)
                    {
                        key = Int32.Parse(DataString);
                    }
                    else
                    {
                        FillData(DataString, true);
                    }

                    DataString = null;
                }
                else if (true == IsDataSection)
                {
                    if (0 == key)
                    {
                        key = Int32.Parse(DataString);
                    }
                    else
                    {
                        FillData(DataString);
                    }
                    
                    IsDataSection = false;
                    DataString = null;
                }
            }
            else if (true == IsDataSection)
            {
                if (' ' == text)
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

    protected abstract void FillData(string DataString, bool _IsArrayData = false);
}
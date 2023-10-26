public abstract class DefaultMapper
{
    protected abstract void Initialize();
    
    public abstract bool GetRowData<T>(int _Key, ref T _RowData);
}
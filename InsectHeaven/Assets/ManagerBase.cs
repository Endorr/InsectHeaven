public abstract class ManagerBase
{
    protected bool UseTick = false;
    
    public abstract void Awake();

    public virtual void Tick()
    {
    }

    public bool IsUsingTick()
    {
        return UseTick;
    }
}
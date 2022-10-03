namespace Prod4
{

    public interface IWeapon
    {
        float GetAccuracy();
        float GetAmmo();
        float GetRange();
        GameObject GetGameObject();
    }
}
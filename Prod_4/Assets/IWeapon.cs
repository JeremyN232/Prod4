using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IWeapon 
{
    float GetAccuracy();
    float GetAmmo();
    float GetRange();
    GameObject GetGameObject();
}

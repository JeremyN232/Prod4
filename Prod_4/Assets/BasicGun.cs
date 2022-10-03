using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Prod4
{

    public class BasicGun : IWeapon
    {
        float m_BasicAccuracy = 5.0f;
        float basicAmmo = 20.0f;
        float basicRange = 15.0f;
        string prefabPath = "Gun";
        public GameObject model; // instantiated prefab

        public float GetAccuracy()
        {
            return m_BasicAccuracy;
        }
        public float GetAmmo()
        {
            return basicAmmo;
        }
        public float GetRange()
        {
            return basicRange;
        }

        public GameObject GetGameObject()
        {
            return model;
        }

        public BasicGun()
        {
            GameObject prefab = Resources.Load<GameObject>(prefabPath);
            model = GameObject.Instantiate(prefab);
        }

        public BasicGun(Vector3 worldPos)
        {
            GameObject prefab = Resources.Load<GameObject>(prefabPath);
            model = GameObject.Instantiate(prefab, worldPos, prefab.transform.rotation);
        }
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Prod4
{

    abstract public class GunDecorator : IWeapon
    {
        protected IWeapon m_DecoratedRifle;

        public GunDecorator(IWeapon rifle)
        {
            m_DecoratedRifle = rifle;
        }

        public virtual float GetAccuracy()
        {
            return m_DecoratedRifle.GetAccuracy();
        }

        public virtual float GetAmmo()
        {
            return m_DecoratedRifle.GetAmmo();
        }
        public virtual float GetRange()
        {
            return m_DecoratedRifle.GetRange();
        }
        public virtual GameObject GetGameObject()
        {
            return m_DecoratedRifle.GetGameObject();
        }
    }

    public class WithScope : GunDecorator
    {
        float m_ScopeAccuracy = 20.0f;
        string prefabPath = "Scope";
        GameObject model; // instantiated prefab

        public WithScope(IWeapon rifle) : base(rifle)
        {
            GameObject prefab = Resources.Load<GameObject>(prefabPath);
            model = GameObject.Instantiate(prefab);
            model.transform.SetParent(GetGameObject().transform);
            model.transform.position += model.transform.parent.position;
        }

        public override float GetAccuracy()
        {
            return base.GetAccuracy() + m_ScopeAccuracy;
        }
    }

    public class WithLongBarrel : GunDecorator
    {
        float m_LongBarrelAccuracy = 10.0f;
        float m_LongBarrelRange = 15.0f;
        string prefabPath = "Long Barrel";
        GameObject model; // instantiated prefab

        public WithLongBarrel(IWeapon rifle) : base(rifle)
        {
            GameObject prefab = Resources.Load<GameObject>(prefabPath);
            model = GameObject.Instantiate(prefab);
            model.transform.SetParent(GetGameObject().transform);
            model.transform.position += model.transform.parent.position;
        }

        public override float GetAccuracy()
        {
            return base.GetAccuracy() + m_LongBarrelAccuracy;
        }
        public override float GetRange()
        {
            return base.GetRange() + m_LongBarrelRange;
        }
    }

    public class WithStendo : GunDecorator
    {
        float m_StendoAmmo = 15.0f;
        string prefabPath = "Stendo";
        GameObject model; // instantiated prefab

        public WithStendo(IWeapon rifle) : base(rifle)
        {
            GameObject prefab = Resources.Load<GameObject>(prefabPath);
            model = GameObject.Instantiate(prefab);
            model.transform.SetParent(GetGameObject().transform);
            model.transform.position += model.transform.parent.position;
        }

        public override float GetAmmo()
        {
            return base.GetAmmo() + m_StendoAmmo;
        }
    }
}
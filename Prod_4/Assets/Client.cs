using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Prod4
{
    public class Client : MonoBehaviour
    {
        Vector3 nextPos = Vector3.zero;
        IWeapon currentRifle;

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown("b"))
            {
                IWeapon rifle = new BaseGun(nextPos);
                currentRifle = rifle;
                Debug.Log("Basic accuracy: " + rifle.GetAccuracy());
                nextPos += new Vector3(1, 0, 0);
            }

            if (Input.GetKeyDown("s"))
            {
                IWeapon rifle = new BaseGun(nextPos);
                rifle = new WithScope(rifle);
                currentRifle = rifle;
                Debug.Log("WithScope accuracy: " + rifle.GetAccuracy());
                nextPos += new Vector3(1, 0, 0);
            }

            if (Input.GetKeyDown("t"))
            {
                IWeapon rifle = new BaseGun(nextPos);
                rifle = new WithScope(new WithLongbarrel(rifle));
                currentRifle = rifle;
                Debug.Log("long Barrel+Scope accuracy: " + rifle.GetAccuracy());
                nextPos += new Vector3(1, 0, 0);
            }

            // demonstrate order doesn't matter
            if (Input.GetKeyDown("y"))
            {
                IWeapon rifle = new BaseGun(nextPos);
                rifle = new WithLongBarrel(new WithScope(rifle));
                currentRifle = rifle;
                Debug.Log("Scope+Stabilizer accuracy: " + rifle.GetAccuracy());
                nextPos += new Vector3(1, 0, 0);
            }

            if (Input.GetKeyDown("a"))
            {
                IWeapon rifle = new BaseGun(nextPos);
                rifle = new WithStendo(rifle);
                currentRifle = rifle;
                nextPos += new Vector3(1, 0, 0);
            }

            if (Input.GetKeyDown("w"))
            {
                IWeapon rifle = new BaseGun(nextPos);
                rifle = new WithStendo(WithScope(rifle));
                currentRifle = rifle;
                nextPos += new Vector3(1, 0, 0);
            }

            if (Input.GetKeyDown("l"))
            {
                IWeapon rifle = new BaseGun(nextPos);
                rifle = new WithStendo(WithLongBarrel(rifle));
                currentRifle = rifle;
                nextPos += new Vector3(1, 0, 0);
            }

            if (Input.GetKeyDown("e"))
            {
                IWeapon rifle = new BaseGun(nextPos);
                rifle = new WithStendo(WithLongBarrel(WithScope(rifle)));
                currentRifle = rifle;
                nextPos += new Vector3(1, 0, 0);
            }



            if (Input.GetKeyDown("c"))
            {
                if (currentRifle != null)
                {
                    GameObject.Destroy(currentRifle.GetGameObject());
                    currentRifle = null;
                }
            }
        }
    }
}
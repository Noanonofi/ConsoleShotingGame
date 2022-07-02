#include <iostream>
#include "Weapon_M4A1.h"

int main()
{
	WeaponClipFor35 weapon35clip;

	Weapon_M4A1 weapon;

	weapon.setnumberRoundsInClip(&weapon35clip);
	weapon.setWeaponReloadingSpeed(&weapon35clip);
}

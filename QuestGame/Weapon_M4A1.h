#ifndef _WEAPON_M4A1_H
#define _WEAPON_M4A1_H
#include "Weapon.h"

class WeaponM4A1 : public Weapon {
public:
	WeaponM4A1();
	virtual void InstallNewTypeCartridges(const CartridgeType* cartridgeType);
	virtual void changeShotDelay(const ShutterType* shutterTypes);
	virtual void InstallNewWeaponClip(const WeaponClip* weaponCLip);
};

#endif
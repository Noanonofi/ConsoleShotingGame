#ifndef _WEAPON_M4A1_H
#define _WEAPON_M4A1_H
#pragma once
#include "Weapon.h"

class Weapon_M4A1 : public Weapon
{
public:
	Weapon_M4A1();
	virtual void setDamageWeapon(const unsigned int& value) override;
	virtual void setShotDelay(const double& value) override;
	virtual void setnumberRoundsInClip(const WeaponClipFor35* weaponClipFor35 = nullptr) override;
	virtual void setWeaponReloadingSpeed(const WeaponClipFor35* weaponClipFor35 = nullptr) override;
private:
	WeaponClipFor35* weaponClipFor35;
};

#endif
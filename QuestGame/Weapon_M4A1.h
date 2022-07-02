#pragma once
#include "Weapon.h"

struct clip {
	unsigned int ClipOne = 35;
	unsigned int ClipTwo = 40;
};

class Weapon_M4A1 : public Weapon
{
public:
	Weapon_M4A1() {
		Weapon_M4A1::DamageShot = 15; // урон от 1 попадания
		Weapon_M4A1::NumberRoundsInClip = 30; // количество патронов в магазине
		Weapon_M4A1::ShotDelay = 0.25;
		Weapon_M4A1::weaponReloadingSpeed = 3.65;
	}
	virtual void setDamageWeapon(const unsigned int& value) override;
	virtual void setShotDelay(const double& value) override;
	virtual void setnumberRoundsInClip(const unsigned& value) override;
	virtual void setWeaponReloadingSpeed(const double& value) override;
};
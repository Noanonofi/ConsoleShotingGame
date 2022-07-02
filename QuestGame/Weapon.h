#ifndef _WEAPON_H
#define _WEAPON_H
#pragma once
#include <chrono>
#include <iostream>
#include "WeaponClipFor35.h"

class Weapon
{
public:
	virtual void setDamageWeapon(const unsigned int& value) = 0;
	virtual void setShotDelay(const double& value) = 0;
	virtual void setnumberRoundsInClip(const WeaponClipFor35* weaponClipFor35 = nullptr) = 0;
	virtual void setWeaponReloadingSpeed(const WeaponClipFor35* weaponClipFor35) = 0;

	~Weapon() {}
protected:
	unsigned int DamageShot;
	double ShotDelay;
	unsigned int NumberRoundsInClip;
	double weaponReloadingSpeed;
};
#endif 


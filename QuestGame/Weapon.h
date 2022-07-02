#ifndef _WEAPON_H
#define _WEAPON_H
#pragma once
#include <chrono>
#include <iostream>

class Weapon
{
public:
	virtual void setDamageWeapon(const unsigned int& value) = 0;
	virtual void setShotDelay(const double& value) = 0;
	virtual void setnumberRoundsInClip(const unsigned& value) = 0;
	virtual void setWeaponReloadingSpeed(const double& value) = 0;
	~Weapon() {}
protected:
	unsigned int DamageShot;
	double ShotDelay;
	unsigned int NumberRoundsInClip;
	double weaponReloadingSpeed;
};
#endif 


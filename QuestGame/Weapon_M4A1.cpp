#include "Weapon_M4A1.h"

Weapon_M4A1::Weapon_M4A1()
{
	Weapon_M4A1::DamageShot = 15; // урон от 1 попадания
	Weapon_M4A1::NumberRoundsInClip = 30; // количество патронов в магазине
	Weapon_M4A1::ShotDelay = 0.25;
	Weapon_M4A1::weaponReloadingSpeed = 3.65;
}

void Weapon_M4A1::setDamageWeapon(const unsigned int& value)
{
}

void Weapon_M4A1::setShotDelay(const double& value)
{
}

void Weapon_M4A1::setnumberRoundsInClip(const WeaponClipFor35* weaponClipFor35)
{
	Weapon_M4A1::NumberRoundsInClip = weaponClipFor35->getNumberRoundsInClip();

	//std::cout << "NumberRoundsInClip = " << NumberRoundsInClip << std::endl;
}

void Weapon_M4A1::setWeaponReloadingSpeed(const WeaponClipFor35* weaponClipFor35)
{
	Weapon_M4A1::weaponReloadingSpeed = weaponClipFor35->getReloadingTimeClip();

	//std::cout << "weaponReloadingSpeed = " << weaponReloadingSpeed << std::endl;
}

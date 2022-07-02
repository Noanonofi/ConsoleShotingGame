#include "Weapon_M4A1.h"

WeaponM4A1::WeaponM4A1()
{
	WeaponM4A1::DamageShot = 15;
	WeaponM4A1::ShotDelay = 0.25;
	WeaponM4A1::NumberRoundsInClip = 30;
	WeaponM4A1::weaponReloadingSpeed = 0.65;
	WeaponM4A1::cartridgeType = nullptr;
	WeaponM4A1::shutterType = nullptr;
	WeaponM4A1::weaponClip = nullptr;

}

void WeaponM4A1::InstallNewTypeCartridges(const CartridgeType* cartridgeType)
{
	// реализовать возможность модификации оружия
}

void WeaponM4A1::changeShotDelay(const ShutterType* shutterTypes)
{
	// реализовать возможность модификации оружия
}

void WeaponM4A1::InstallNewWeaponClip(const WeaponClip* weaponCLip)
{
	// реализовать возможность модификации оружия
}

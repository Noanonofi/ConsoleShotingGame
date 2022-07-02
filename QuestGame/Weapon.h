#ifndef _WEAPON_H
#define _WEAPON_H
#include "WeaponClip.h"
#include "CartridgeType.h"
#include "ShutterType.h"

class Weapon {
public:
	/*
		* InstallNewTypeCartridges - ��������� ������ ���� ��������, �������� �� ���� �� ��������
		* changeShotDelay - ��������� ������ �������,  �������� �� ���������������� aka �������� ����� ����������
		* InstallNewWeaponClip - ��������� ������ �������� ��� ������, �������� �� ���������� �������� � � �������� ����������� ������
	*/
	virtual void InstallNewTypeCartridges(const CartridgeType& cartridgeType) = 0;
	virtual void changeShotDelay(const ShutterType& shutterTypes) = 0;
	virtual void InstallNewWeaponClip(const WeaponClip& weaponCLip) = 0;

protected:
	unsigned int DamageShot;
	double ShotDelay;
	unsigned int NumberRoundsInClip;
	double weaponReloadingSpeed;
	CartridgeType& cartridgeType;
	ShutterType& shutterType;
	WeaponClip& weaponClip;
};

#endif


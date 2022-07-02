#ifndef _WEAPONCLIPFOR35_H
#define __WEAPONCLIPFOR35_H_H
#pragma once

class WeaponClipFor35
{
public:
	WeaponClipFor35();

	const unsigned int getNumberRoundsInClip() const;
	const double getReloadingTimeClip() const;
private:
	unsigned int NumberRoundsInClip;
	double reloadingTimeClip;
};

#endif


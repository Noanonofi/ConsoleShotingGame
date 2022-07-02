#ifndef _WEAPONCLIP_H
#define _WEAPONCLIP_H

class WeaponClip {
public:
	WeaponClip();
	~WeaponClip();
protected:
	unsigned int NumberRoundsInClip;
	double weaponReloadingSpeed;
};

#endif


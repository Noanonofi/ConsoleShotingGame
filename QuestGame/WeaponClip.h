#ifndef _WEAPONCLIP_H
#define _WEAPONCLIP_H

class WeaponClip {
public:

	virtual void setNumberRoundsInClip(const unsigned int& value) = 0;
	virtual void setWeaponReloadingSpeed(const unsigned int& value) = 0;

	virtual void getNumberRoundsInClip() const = 0;
	virtual void getWeaponReloadingSpeed() const = 0;

	~WeaponClip();
protected:
	unsigned int NumberRoundsInClip;
	double WeaponReloadingSpeed;
};

#endif


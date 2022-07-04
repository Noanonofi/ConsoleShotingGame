#ifndef _CARTRIDGETYPE_H
#define _CARTRIDGETYPE_H

class CartridgeType
{
public:
	virtual void setDamageShot(const unsigned int& value) = 0;

	virtual double getBulletDamage() const = 0;

	~CartridgeType();
protected:
	double DamageShot;
};

//Rewrite weapon modifications from classes to enum

#endif

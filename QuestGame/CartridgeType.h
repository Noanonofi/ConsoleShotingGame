#ifndef _CARTRIDGETYPE_H
#define _CARTRIDGETYPE_H

class CartridgeType
{
public:
	CartridgeType();
	const virtual double getBulletDamage() const = 0;
	~CartridgeType();
protected:
	double DamageShot;
};



#endif

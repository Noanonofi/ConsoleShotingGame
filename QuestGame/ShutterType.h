#ifndef _SHUTTERTYPE_H
#define _SHUTTERTYPE_H

class ShutterType
{
public:
	virtual void setShotDelay(const unsigned int& value) = 0;
	virtual double getRateofFire() const = 0;
	~ShutterType();
protected:
	double ShotDelay;
};

//Rewrite weapon modifications from classes to enum

#endif


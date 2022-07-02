#ifndef _SHUTTERTYPE_H
#define _SHUTTERTYPE_H

class ShutterType
{
public:
	ShutterType();
	virtual const  double getRateofFire() const = 0;
	~ShutterType();
protected:
	double ShotDelay;
};

#endif


#include "WeaponClipFor35.h"

WeaponClipFor35::WeaponClipFor35()
	:NumberRoundsInClip(35),
	reloadingTimeClip(0.4)
{}

const unsigned int WeaponClipFor35::getNumberRoundsInClip() const
{
    return NumberRoundsInClip;
}

const double WeaponClipFor35::getReloadingTimeClip() const
{
    return reloadingTimeClip;
}

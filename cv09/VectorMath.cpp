#pragma once

#include <iostream>
#include <Math.h>
#include "VectorMath.h"


struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ)
{
	struct vector3d w;

	switch (typ)
	{
	case soucet:

		w.x = u.x + v.x;
		w.y = u.y + v.y;
		w.z = u.z + v.z;

		break;

	case rozdil:

		w.x = u.x - v.x;
		w.y = u.y - v.y;
		w.z = u.z - v.z;

		break;

	case skalarniSoucin:

		w.x = skalarniSoucin_f(u, v);

		break;

	case vektorovySoucin:

		w.x = (u.y * v.z) - (u.z * v.y);
		w.y = (u.z * v.x) - (u.x * v.z);
		w.z = (u.x * v.y) - (u.y * v.x);

		break;
	}

	return w;
}

double skalarniSoucin_f(struct vector3d u, struct vector3d v)
{
	double vysledek = (u.x * v.x) + (u.y * v.y) + (u.z * v.z);
	
	return vysledek;
}

void tisk(struct vector3d w) 
{
	printf(" w  = (%lf, %lf, %lf)\n|w| = %lf \n\n", w.x, w.y, w.z, sqrt(pow(w.x, 2) + pow(w.y, 2) + pow(w.z, 2)));
}
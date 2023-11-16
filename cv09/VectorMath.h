#pragma once

#include <iostream>

enum typOperace { soucet = 1, rozdil, skalarniSoucin, vektorovySoucin };

struct vector3d
{
	double x;
	double y;
	double z;
};

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ);

double skalarniSoucin_f(struct vector3d u, struct vector3d v);

void tisk(struct vector3d u);
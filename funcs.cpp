#include <iostream>
#include "funcs.h"
#include <cmath>

Coord3D* createCoord3D(double x, double y, double z){
	Coord3D *pCoord3D = new Coord3D();
	pCoord3D->x = x;
	pCoord3D->y = y;
	pCoord3D->z = z;
	
	return pCoord3D;
}

void deleteCoord3D(Coord3D *p){
	delete p;
}

double length(Coord3D *p){
	int x = p->x;
	int y = p->y;
	int z = p->z;
	
	double distance = sqrt(pow(x,2.0) + pow(y,2.0) + pow(z,2.0));

	//Round to 4 decimal places
	return (int)(round(distance * pow(10, 4))) / pow(10,4);
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
	double coordOneDistance = length(p1);
	double coordTwoDistance = length(p2);

	if (coordOneDistance >= coordTwoDistance) return p1;
	return p2;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
	double updatedPosX = ppos->x + (pvel->x * dt);
	double updatedPosY = ppos->y + (pvel->y * dt);
	double updatedPosZ = ppos->z + (pvel->z * dt);
	
	ppos->x = updatedPosX;
	ppos->y = updatedPosY;
	ppos->z = updatedPosZ;
	
	return;
}


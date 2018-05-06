/*
Michael Alvarez
Professor: Genediy Maryash
Date: 04/27/18
Lab 11B
calculate the distance between points
*/

#include <iostream>
#include<cmath>
using namespace std;
 struct Coord3D {
    double x;
    double y;
    double z;
};

double length(Coord3D *p);
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *ppos, Coord3D *pvel, double dt);


int main() {
   Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // struct pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4

}

double length(Coord3D *p)
{
  //computes distance from origin to point
  //needs to square x^2+y^2+z^2
  
  double formula = pow(p->x,2.0) + pow(p->y,2.0) + pow(p->z,2.0);
  
  return sqrt(formula);
  
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
	double roll, rock;
	roll =length(p1);
	rock =length(p2);
	if (rock > roll)
	{
		return p2;
	}
	else
	{
		return p1;	
	}	
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
	
	ppos->x = ppos->x + pvel->x * dt;
	ppos->y = ppos->y + pvel->y * dt;
	ppos->z = ppos->z + pvel->z * dt;

	//update ppos	
}


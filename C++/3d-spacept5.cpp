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
// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z);

// free memory
void deleteCoord3D(Coord3D *p);


int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
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

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z)
{
	Coord3D *p = new Coord3D; 
	p->x = x;
	p->y = y;
	p->z = z;	
	
	return p;
}

// free memory
void deleteCoord3D(Coord3D *p)
{
 	delete p;
	p = NULL;
}




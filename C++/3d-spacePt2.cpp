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

int main() {
      Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; // So which point is farther
  
    
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


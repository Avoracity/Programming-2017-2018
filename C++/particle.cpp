/*
Michael Alvarez
Professor: Gennadiy Maryash
Date: 5/2/18
Lab po
*/

// dynamically allocate memory for a particle and initialize it
#include<iostream>
#include<cmath>
using namespace std;
struct Coord3D {
    double x;
    double y;
    double z;
};
struct Particle{
Coord3D position;
Coord3D velocity;
};
Particle* createParticle(double x, double y, double z,
                         double vx, double vy, double vz);
// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz);
// get its current position
Coord3D getPosition(Particle *p);
// update particle's position after elapsed time dt
void move(Particle *p, double dt);
// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p);
int main(){
Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);
        // move the particle
        move(p, dt);
        time += dt;
        // reporting its coordinates
        cout << "Time: " << time << " \t";
        cout << "Position: "
             << getPosition(p).x << ", "
             << getPosition(p).y << ", "
             << getPosition(p).z << endl;
    }
    // remove the particle, deallocating its memory
    deleteParticle(p);
}
Particle* createParticle(double x, double y, double z, double vx, double vy, double vz){
Particle* standard = new Particle; //creates a new pointer located in memory
 standard->position.x=x;
 standard->position.y=y;
 standard->position.z=z;
 standard->velocity.x=vx;
 standard->velocity.y=vy;
 standard->velocity.z=vz;
 return standard;
}
void setVelocity(Particle *p, double vx, double vy, double vz){
p->velocity.x=vx;
p->velocity.y=vy;
p->velocity.z=vz;
}
Coord3D getPosition(Particle *p){
return p->position; //p returns position
}
void move(Particle *p, double dt){
p->position.x=(p->position.x)+(p->velocity.x)*dt;
p->position.y=(p->position.y)+(p->velocity.y)*dt;
p->position.z=(p->position.z)+(p->velocity.z)*dt;
}
void deleteParticle(Particle *p){
delete p;
}

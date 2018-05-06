/*
Author: Michael Alvarez
Course: CSCI-135
Instructor: Genediy Maryash
Assignment: Project 3
 Bot modification program
*/


#include <iostream>
#include "bot.h"
#include <cstdlib>
using namespace std;
const int MAX_ROBOT_NUM = 50;

int NUM;          // the number of robots
int ROWS, COLS;   // the graph

int setting[50];

	

void onStart(int num, int rows, int cols, double mpr,
Area &area, ostream &log)
{

	NUM = num; 
	COLS = cols;
	
	for (int tem = 0; tem <49; tem++)
	{
		setting[tem] = 2;
	}
	log << "Start!" << endl;   
	log<<endl;
}


int totalDist(int RobotCol, int trashCol){
	return abs(RobotCol-trashCol);
}
// Decision of the robots actions 
Action onRobotAction(int id, Loc loc, Area &area, ostream &log) {

int row = loc.r; // the robot's current row
int col = loc.c; // column
	
	for (int i = 0; i < NUM; i++){
		if(setting[i] == 1){
       for (int j=0; j<NUM; j++){
			//1 represents broken robot
			if((area.locate(i).r == row+1) && (area.locate(i).c == col) )
			{

				setting[i] = 2;
				return REPAIR_DOWN;
			}
			else if ((area.locate(i).r == row) && (area.locate(i).c == col + 1))
			{

				setting[i] = 2;
				return REPAIR_RIGHT;
			}
			else if((area.locate(i).r == row-1 ) && (area.locate(i).c == col ))
			{

				setting[i] = 2;
				return REPAIR_UP;
			}
			else if((area.locate(i).r == row ) && (area.locate(i).c == col-1))
			{

				setting[i] = 2;
				return REPAIR_LEFT;
			}
			if (setting[i] == 2) continue;                 
			if(area.locate(i).r > row)
			{
				return DOWN;
			}
	
			else if(area.locate(i).r < row)
			{
				return UP;
			}
	
			else if(area.locate(i).c > col)
			{
				return RIGHT;
			}
	
			else if(area.locate(i).c < col)
			{
				return LEFT;
			}
				
	    	}
			
				
	}
}

	for (int i = 0; i < 500; i++){
		if (area.inspect(row, col) == DEBRIS){
			return COLLECT;
		}
		else if (area.inspect(row,col+i) == DEBRIS){//Look right
			return RIGHT;
		}
		else if (area.inspect(row,col-i) == DEBRIS){//Look left
			return LEFT;
		}
		else if (area.inspect(row-i,col) == DEBRIS){// Look up
			return UP;
		}
		else if (area.inspect(row+i,col) == DEBRIS){//Check down
			return DOWN;
		}
}
	for (int cx = 0; cx < (600); cx++){
		for (int i = 0; i < 600; i++){
			if (area.inspect(row, col) == DEBRIS){
				return COLLECT;
			}
			else if (area.inspect(row-i,col+cx) == DEBRIS){//Check right col up
				return RIGHT;
			}
			else if (area.inspect(row+i,col+cx) == DEBRIS){//Check right col down
				return RIGHT;
			}
			else if (area.inspect(row-i,col-cx) == DEBRIS){//Check left col up
				return LEFT;
			}
			else if (area.inspect(row+i,col-cx) == DEBRIS){//Check left col down
				return LEFT;
			}	
		}
	for (int i = 0; i < 500; i++){
		if (area.inspect(row, col) == DEBRIS){
			return COLLECT;
		}
		else if (area.inspect(row-i,col-i) == DEBRIS){//Check diag upper left
			return LEFT;
		}
		else if (area.inspect(row+i,col-i) == DEBRIS){//Check diag lower left
			return LEFT;
		}
		
		else if (area.inspect(row-i,col+i) == DEBRIS){//Check diag upper right
			return RIGHT;
		}
		
		else if (area.inspect(row+i,col+i) == DEBRIS){//Check diag upper right
			return RIGHT;
		}
		
		
	}
	
}

void onRobotMalfunction(int id, Loc loc, Area &area, ostream &log) {
	log << "Robot " << id << " is damaged." << endl;
	condition[id] =1;
	

}

void onClockTick(int time, ostream &log) {
	if (time % 100 == 0) log << time << " ";
}
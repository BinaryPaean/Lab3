#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <ctime>

using namespace std;

/*
 * Purpose:  this function print out the person who wrote the program, 
 *   and date/time the program run.
 * 
 * @parm myName - the author of the program
 * @parm courseInfo - the name of the course 
 * @return - none
 * 
 */
 
void printMeFirst(string myName, string courseInfo) {

	time_t now = time(0); // current date/time based on current system
	char tstr[26];
	ctime_s(tstr, sizeof tstr, &now); // convert time now to string form
	
	// Print out my signature
	
	cout <<" Program written by: "<< myName << endl; // put your name here
	cout <<" Course info: "<< courseInfo << endl;
	cout <<" Date: " << tstr << endl;

}
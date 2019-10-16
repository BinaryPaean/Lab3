#ifndef PRINTME_H
#define PRINTME_H

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
/* 
 * forward declaration - tells the compiler that the function
 * printMe( ) is defined else where so just go use it, and
 * it will be resolved during the linking time.
 * 
 */
 
void printMeFirst(string myName, string courseInfo);

#endif

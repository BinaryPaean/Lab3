#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

#include "printMeFirst.h"
using namespace std;

//Binary to int
//Allowed to use std::stoi?
int to_int(const string& b) {
    int final = 0;
    for (int i = 0; i < b.length(); i++) 
    {
        final *= 2;
        final += b[i] - '0';
    }
    return final;
}

//Decimal to binary
string to_binary(int n) {
    string num = "";
    while (n > 0) {
        num += '0' + (n % 2);
        n /= 2;
    }
    return num;
}

//Positive/Negative checker
bool is_positive(int n) {
    return n > 0;
}

//Prints all possible values of 32 bit unsigned integer one bit position set.
void bit() {
  unsigned int maxNum = 0;
  for (int i = 0; maxNum < 2147483647; ++i)
    {
        maxNum = pow(2,i); //Returns base raised to the power exponent
        cout << maxNum << endl;
      
    }

}

int main() {
  //Prints out details and date/time
  printMeFirst("Omid Khan", "Lab3: CS-113 - Binary/Decimal Converter");
  
 
  cout << "Algorithm to convert binary number into an integer: " << endl;
  cout << to_int("01010") << endl; //10
  cout << to_int("10000000") << endl; //128
  cout << to_int("11111111") << endl; //255
  cout << to_int("0") << endl; //0
 
  cout << "\nAlgorithm to convert a decimal number to binary: " << endl;
  cout << to_binary(10) << endl; //00001010
  cout << to_binary(254) << endl; //11111110
  cout << to_binary(128) << endl; //10000000
  cout << to_binary(0) << endl; //0 -- oops?

  cout << "\nFunction to check if the number is positive or negative: " << endl;
  cout << is_positive(13) << endl;
  cout << is_positive(-199) << endl;
  cout << is_positive(-0) << endl;
  cout << is_positive(1) << endl;

  cout << "\nAlgorithm to print all possible values of 32 bit unsigned integer one bit position set: " << endl;
  bit();

  return 0;

}
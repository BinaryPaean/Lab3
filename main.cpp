#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

#include "printMeFirst.h"
using namespace std;

//Binary to int
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
  cout << to_int("01010") << endl;
 
  cout << "\nAlgorithm to convert a decimal number to binary: " << endl;
  cout << to_binary(10) << endl;

  cout << "\nFunction to check if the number is positive or negative: " << endl;
  cout << is_positive(1) << endl;
  cout << is_positive(-1) << endl;

  cout << "\nAlgorithm to print all possible values of 32 bit unsigned integer one bit position set: " << endl;
  bit();

  return 0;

}
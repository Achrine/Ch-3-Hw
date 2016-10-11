//Programmer: Steven 
// Assignment: Ch3 Challenge 5
//Filename: main.cpp
//Creation Date: 10/06/16
//Description: The purpose of this program is to recreate equations
//Book description: 
/*
Write C++ expressions for the following algebraic expressions: 
a = 12x 
z = 5x + 14y + 6k
y = x^4
g = (h + 12)/4k
c = (a^3)/(b^2 k^4)


*/
//Ch3, challenge 5, 

//Preprocessor Directive 
#include <iostream>
#include "string.h"
#include <sstream>
using namespace std;

int main() {
	int x, y, k, h, b, //now and below, are the equations
		a = 12 * x, z = (5 * x) + (14 * y) + (6 * k), y = x ^ 4, g = (h + 12) / (4 * k),
		c = (a ^ 3) / (b ^ 2 * k ^ 4);


	return 0;
}

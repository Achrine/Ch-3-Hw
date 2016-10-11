//Programmer: Steven 
// Assignment: Ch3 Challenge 6
//Filename: main.cpp
//Creation Date: 10/06/16
//Description: How many widgets?
//Book description: 

/*

The Yukon Widget Company manufactures widgets that weigh 9.2 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based on
the total weight of the pallet. The program should ask the user how much the pallet
weighs by itself and with the widgets stacked on it. It should then calculate and display
the number of widgets stacked on the pallet.

*/
//Ch3, challenge 1, Miles per Gallon. 

//Preprocessor Directive 
#include <iostream>
#include "string.h"
#include <sstream>
using namespace std;

int main() {
	double widget, pallet; //variable declaration
	widget = 9.2; // in pounds

	cout << "How much does the pallet weigh on its own: ";
	cin >> pallet;
	cout << "The total weight of the pallet and widget is: " << pallet + widget << endl;

	return 0;
}


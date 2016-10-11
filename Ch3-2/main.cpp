//Programmer: Steven 
// Assignment: Ch3 Challenge 2
//Filename: main.cpp
//Creation Date: 10/06/16
//Description: The purpose of this program is to calculate gas mileage for a car. 
//Book description: Assume a string object has been defined as follows: string description; 
// Write a cin statement that reads in a one-word string,
// Write a statement that reads in a string that can contain multiple words separated by blanks.

//Ch3, challenge 2

//Preprocessor Directive 
#include <iostream>
#include "string.h"
#include <sstream>
using namespace std;


int main(){
	string description = " "; //variable declaration 
	cout << "Hello, input description of one word: ";
	getline(cin, description); // take the input

	string desc_2 = ""; // variable declaration 
	cout << "\nInput many words: ";
	cin >> desc_2;  // take input

	cout << "\nYou inputed: " << description; //return input
	cout << "\nYou wrote: " << desc_2; //return input
	
	return 0;
}
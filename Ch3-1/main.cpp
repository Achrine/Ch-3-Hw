//Programmer: Steven 
// Assignment: Ch3 Challenge 1
//Filename: main.cpp
//Creation Date: 10/06/16
//Description: The purpose of this program is to calculate gas mileage for a car. 
//Book description: Write a program that calculates a car's gas mileage. The program should ask for. 
// The number of gallons of gas the car can hold, the number of miles driven on a full tank. 
// It should display the number of miles driven per gallon. Or miles per gallon. 

//Ch3, challenge 1, Miles per Gallon. 

//Preprocessor Directive 
#include <iostream>$
using namespace std;

int main(){
	double mileage, // hold the calculated miles per gallon 
	gallons, //hold the gas tank capacity (in gallons)
	miles; // to hold the miles the car can go on 1 tank of gas. 
	
	//Input -- Using promyt and response method. 
	//Get the gas tank capacity. 
	cout << "How many gallons of gas can the car hold? "; // prompt 
	cin >> gallons; //Response .. this repeats. below
	cout << "How many miles can you drive on a full tank? "; 
	cin >> miles; 
	
	 //Processing 
	 //Calculate the miles per gallon. 
	 mileage = miles/gallons; 
	// Output 
	//Display the result. 
	cout << "\nThis car gets " << mileage << " miles per gallon.\n\n";
	
	return 0;
	
}
//Programmer: Steven 
// Assignment: Ch3 Challenge 2
//Filename: main.cpp
//Creation Date: 10/06/16
//Description: Stadium Seating 
//Book description: 
/*

There are three seating categories at a stadium. For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickets for each class of seats were sold, then displays the amount of income
generated from ticket sales. Format your dollar amount in xed-point notation, with
two decimal places of precision, and be sure the decimal point is always displayed.

*/
//Ch3, challenge 2, Stadium Seating. 

//Preprocessor Directive 
#include <iostream>
#include <iomanip>
#include "string.h"

using namespace std; //call this portion of the libraries called 

int main() { //worlds greatest function in existence. It does it all. 
	int seatsA, seatsB, seatsC, sTotal; // variable declaration 
		seatsA = 15,
		seatsB = 12,
		seatsC = 9;
		sTotal = seatsA + seatsB + seatsC;
		
	int ticketA = 0, ticketB = 0, ticketC = 0;
		

	cout << "How many tickets did Class A buy: ";
	cin >> ticketA;
	cout << "\nHow many tickets did Class B buy: ";
	cin >> ticketB;
	cout << "\nHow many tickets did Class C buy: ";
	cin >> ticketC;

	

	//Processing 
	
	double ind_revA = seatsA * ticketA,
		ind_revB = seatsB * ticketB,
		ind_revC = seatsC * ticketC,
		tTotal = ticketA + ticketB + ticketC,
		tRevenue = tTotal * sTotal;

	


	cout << "Revenue generated from Classes\n";
	cout << setprecision(2) << fixed; //set precision
	cout << "Class A: " << setw(10) << ind_revA << endl; //formatting 
	cout << "Class B: " << setw(10) << ind_revB << endl;
	cout << "Class C: " << setw(10) << ind_revC << endl;
	cout << "Class Total " << setw(10) << tRevenue << endl;

	
	return 0;
}
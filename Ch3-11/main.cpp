//Programmer: Steven 
// Assignment: Ch3 Challenge 11
//Filename: main.cpp
//Creation Date: 10/06/16
//Description: Convert USD to Euro and Yen
//Book description:
/*
 
 
 Write a program that will convert U.S. dollar amounts to Japanese yen and to euros, storing the conversion factors in the constants 
 YEN PER DOLLAR and EUROS PER DOLLAR. 
 To get the most up-to-date exchange rates, search the Internet using the term
 
 "currency exchange rate". If you cannot find the most recent exchange rates, use the following:
 1 Dollar = 83.14 Yen
 1 Dollar = 0.7337 Euros
 
 Format your currency amounts in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed.
 
*/

//Ch3, challenge 1, Miles per Gallon.

//Preprocessor Directive 
#include <iostream> //for standard stuff
#include <sstream>
#include <iomanip> //for formatting
using namespace std; //so I don't have to keep putting std:: everywhere

int main(){ //main function, returning an integer
    //Variable Declaration;
    //USD can double as the amount had.
    double USD = 1.00, yen_per_dollar = USD * 83.14, euro_per_dollar = USD * 0.7337;
    
    cout << "How much American money do you have: ";
    cin >> USD;
    
    //Processing and Printing
    cout << setprecision(2) << fixed; //set precision
    cout << "Money in Yen and Euro\n";
    cout << "_________________________\n";
    cout << "Yen per dollar  : "  << right << setw(5) << yen_per_dollar << endl; //print the variable
    cout << "Euro per dollar : " << right << setw(5) << euro_per_dollar << endl;//print the variable
    
    
    
    return 0;
}

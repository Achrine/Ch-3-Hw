//Pgrogrammer : Steven Brcak
//Assignment Ch3, Prgramming Chal 10 Centigrade to Fahrenheit 
//Filename: Main.cpp
//Creation Date: 10/06/16
//Description: Convert a Centigrade temp to Fahrenheit.

// Chapter 3, Prgramming Challeng 10, cent to fah.

//Proprocessor Directives. 
#include <iostream //in-out procedures
#include <iomanip> //formatting 
using namespace std;

//The next line of code begins the c++ program (function main)
int main(){
	//Variable Definition Statements 
	double centigrade, // temp in centigrade
	fahrenheit;
	
	//Input - Using prompt and response method 
	//Get the centigrade temperature 
	cout << "Enter the temp in centigrade that " // prompt 
	<< "you wish to convert: ";
	cin >> centigrade;
	
	//Processing 
	//Convert centigrade tempt to fahrenheit
	fahrenheit = ((9.0/5.0) * centigrade) + 32;
	
	//Output 
	// Display the temperature in both fahrenheit and centigrade. 
	cout << centigrade << " degrees Centigrade is equal to ";
	cout << fixed << showpoint << setprecision(1);
	cout << fahrenheit << " degrees Fahrenheit.\n\n";
	
	return 0;
	
}
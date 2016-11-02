#include <iostream> //we are referencing these libraries as a preprocessor directive. 
#include <string>
#include <iomanip>

using namespace std; // we are using the std portions of these libraries. 

int main(){
	// To hold the names of the months. 
	string month1, month2, month3;
	
	// To hold the rainfall amounts and average 
	double rain1, rain2, rain3, rainAvg;
	
	//Overview statement for End user. 
	cout << "this program calculates the average" << " rainfall for three months\n";
	
	//Input -- Gather input from end user using prompt andresponse method 
	//geth the name and rainfall for the 1st month
	cout << "\nEnter the name of the 1st month: "; //cout is a prompt
	cin >> month1; //cin is a response, taking input. 
	cout << "Enter the rainfall for " << month1 << ": ";
	cin >> rain1;
	
	//Get the name and rainfall for the 2nd month. 
	cout << "\nEnter the name of the 2nd motnh: "; //This is another prompt...
	cin >> month2; //Another response. Same pattern. No use repeating. 
	cout << "Enter therainfall for " << month2 << ": " ;
	cin >> rain2;
	
	//Get the name andrainfall for the third month
	cout << "\nEnter the name of the 3rd month: ";
	cin >> month3;
	cout << "Enter the rainfall for " << month3 << ": ";
	cin >> rain3;
	
	//Processing 
	//Calculate the average rainfall 
	rainAvg = (rain1 + rain2 + rain3)/3; // Parens are used here to keep the order of Op correct
	
	
	//Output 
	//Display the average rainfall. 
	cout << "\nThe average rainfall for "
	<< month1 << "," << month2 << ",and " << month3 << " is "
	<< fixed << showpoint << setprecision(2) << rainAvg << " inches.\n\n"; //the lines are formatted to look nice...
	
	return 0;
	
}
	

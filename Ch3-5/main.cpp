//Programmer: Steven 
// Assignment: Ch3 Challenge 5
//Filename: main.cpp
//Creation Date: 10/06/16
//Description: Box Office 
//Book description: Write a program that calculates a car's gas mileage. The program should ask for. 
/*

A movie theater only keeps a percentage of the revenue earned from ticket sales. 
The remainder goes to the movie distributor. 
Write a program that calculates a theater s gross and net box office profit for a night. 
The program should ask for the name of the movie, and how many adult and child tickets were sold. 
(The price of an adult ticket is $6.00 and a childs ticket is $3.00.) 

*/

//Ch3, challenge 1, Miles per Gallon. 

//Preprocessor Directive 
#include <iostream>
#include <iomanip> //formatting
#include <string> //I need this type
#include <sstream> // for getline
using namespace std;



int main(){
    //Variable declaration
    string movie_name; // the name of the movie
    double aTicket = 6.00, cTicket = 3.00; //Adult Ticket and Childs Ticket costs
    int aTicket_Sold, cTicket_Sold; //Need to see how many people came
    
    
    cout << "What was the name of the movie seen: "; //Prompt
    getline(cin,movie_name); //Input...pattern continues bellow. getline takes the input without \n keys.
    cin.ignore(); // skip newline character
    cout << "\nHow many children came to the movie: ";
    cin >> cTicket_Sold;
    cin.ignore();
    cout << "\nHow many adults came to the movie: ";
    cin >> aTicket_Sold;
    cin.ignore();
    
    //Processing
    double grossProfit = (aTicket_Sold * aTicket) + (cTicket_Sold * cTicket), //Calculate the total money generated
           percent = 0.20,
            netProfit = percent * grossProfit, //percent mult by profit is what is kept
            distPay = grossProfit - netProfit; // the rest goes to everyone else
    
    cout << "Revenue generated from Classes:\n";
    cout << setw(10) << "Category"           << setw(13) << " : " << right << setw(10) << "Value" << endl;
    cout << setw(10) << "Movie name"         << setw(13) << " : " << right << setw(10) << movie_name << endl; //formatting
    cout << setw(10) << "Child Tickets"      << setw(10) << " : " << right << setw(10) <<  cTicket_Sold << endl;
    cout << setw(10) << "Adult Tickets"      << setw(10) << " : " << right << setw(10) << aTicket_Sold << endl;
    cout << setw(10) << "Gross Profits"      << setw(10) << " : " << right << setw(10) << grossProfit << endl;
    cout << setw(10) << "Net Profit"         << setw(13) << " : " << right << setw(10) << netProfit << endl;
    cout << setw(10) << "Distributer fee"    << setw(8) << " : " << right << setw(10) << distPay << endl;
    
    
    
    return 0;
}

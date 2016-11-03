//Programmer: Steven 
// Assignment: Ch3 Challenge 7
//Filename: main.cpp
//Creation Date: 10/06/16
//Description: How Many Calories
//Book description: Calculate the amount of calories
/*
 
 
 A bag of cookies holds 40 cookies. 
 The calorie information on the bag claims that there are 10 servings in the bag and that a serving equals 300 calories.
 Write a program that asks the user to input how many cookies he or she actually ate and then reports how many total calories
 were consumed.
 
*/

//Ch3, challenge 7, Amount of Calories

//Preprocessor Directive 
#include <iostream>
#include <iomanip> // for formatting
#include <sstream> // for IO
using namespace std;


int main(){
    //Variable Declaration
    int cookies_in_bag = 40, servings_in_bag = 10, serving_calories = 300,
    
    //Create cookies eaten for later
    cookies_eaten;
    
    
    cout << "How many cookies did you eat: "; //Prompt
    cin >> cookies_eaten; //input
    
    
    //Processing
    int //Calories for Each individual cookie
    calories_per_cookie = serving_calories / servings_in_bag,
    // calories eaten is how many cookies were eaten mult by calories
    calories_eaten = cookies_eaten * calories_per_cookie;
    
    cout << setprecision(2) << fixed; //set precision
    cout << "Cookies you have eaten: " << setw(4) <<cookies_eaten  <<endl;
    cout << "Calories you have eaten: " << setw(4) << calories_eaten << endl;
    
    
    
    
    return 0;
}


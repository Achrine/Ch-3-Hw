//Programmer: Steven Brcak 
//Assignment: Programming Challenge Chapter 3 Number 3:
// 
//Filename: main.cpp
//Creation date: October 4, 2016

//Preprocessor Directive. 
#include <iostream>
#include <iomanip>
using namespace std;

//function(module) main.
//All c++ begins with main. 

int main(){
  int test01,
      test02,
      test03,
      test04,
      test05;
  double average; 
//Overview Statement 
  cout << "This program will calculate the average of five test scores.\n\n";
//Input using prompt and response method from Chapter 3. 
  cout << "Enter test score 1: "; //prompt 
  cin >> test01;  //Response 
   cout << "Enter test score 2: "; //prompt 
  cin >> test02;  //Response 
   cout << "Enter test score 3: "; //prompt 
  cin >> test03;  //Response 
   cout << "Enter test score 4: "; //prompt 
  cin >> test04;  //Response 
   cout << "Enter test score 5: "; //prompt 
  cin >> test05;  //Response 
  
  //Processing -- Variblae Assignment Statement using an expression 
  average = (test01 + test02 + test03 + test04 + test05)/5;
  //Format the output before sending it to the screen. 
  //Use set precision and the fixed manipulator
  //Set it up to show two digits to the right of the decimal poitn. See page 117 
  cout << // finish the formatting statement -- see page 117;
    // Output 
    cout << "\n\n Your average test score is: " << average << "percent" << endl;
  //The next line of code reads: return zero. 
  return 0;
}
  
  
    
    return 0;
}

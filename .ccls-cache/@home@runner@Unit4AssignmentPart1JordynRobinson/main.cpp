//Jordyn Robinson,COSC-1436-57002, Replit.com, This program will accept input from the user while the value entered does not equal -1 which is the exit value.

#include <cstdlib> // Provides EXIT_SUCCESS
#include "Input_Validation_Extended.h" 
#include <iostream> // Provides cout, endl
#include <string> // for string manipulation
#include <sstream> // for string manipulation and comparison
using namespace std;

int main() 

{

   // PART 1
  // VARIABLES
    int counter = 0;
    double n = 0.0;
    double multi = 0.0;
    double div = 0.0;
    double prob1 = 0.0;
    double prob2 = 0.0;
  
    // WHILE LOOP
    
      while(n != -1.0) //EXIT CONDITION
      {
        // USER INPUT
        cout << "\nPlease enter a number (-1 to exit): ";
       n = validateDouble(n);
        
          // IF STATEMENT OF EXIT VALUE
          if (n == -1.0)
            {
                exit(0); 
            }
            // IF VALUE IS VALID THEN CARRY ON
            else
              {

                 // CALCULATIONS
                // MULTIPLICATION
                 multi = n * n;
                // OUTPUTS
                cout << "\nThe number you entered is: " << n << endl;
                cout << "( " << n << " * " << n << " ) = " << multi << endl;
                cout << "The number multiplied by itself is: " << multi << endl;
                // DIVISION
                div = n / n;
                // OUTPUTS
                cout << "\nThe number you entered is: " << n << endl;
                cout << "( " << n << " / " << n << " ) = " << div << endl;
                cout << "The number divided by itself is: " << div << endl;

                // PROBLEM 1
                // CALCULATIONS
                prob1 = (n + 3.0) / 5.0;
                cout << "( " << n << " + 3) / 5  " << " ) = " << prob1 << endl;

                // PROBLEM 2
                // CALCULATIONS
                prob2 = ((n + 3.0)/5.0) + ((n+7)/2.0);
                cout << "(( " << n << " + 3) / 5  " << " ) + (( " << n << " + 7) / 2) = " << prob2 << endl; 
              

              }
            // INCREMENT COUNTER
        counter++;





      }
  // OUTPUTS OF COUNTER AND END OF PROGRAM
   cout << "\nThis program ran " << counter << endl;
   cout << "\nThis program has ended " << endl;
  
  return 0;
} 

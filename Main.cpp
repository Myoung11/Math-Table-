// Matthew Young
// Square and Cube Math Table 

// This program will find the square and cube for numbers 0-10. 

#include <iostream>
#include <cmath>

using namespace std;

int varNum; // Variable for each number

int main()
{          //Beginning of Main Function
    
    varNum = 0;                             // Starts while loop for table 
    
    cout << "Number\tSquare\tCube" << endl; // Creates Column Titles
    
    while (varNum <= 10) {                  // While loop that goes up to 10
        
         cout << varNum << "\t" << pow(varNum, 2) << "\t" << pow(varNum, 3) << endl; /* Equation to set columns,
                                                                                        show beginning number,
                                                                                        and to find the 
                                                                                        square and cube of each
                                                                                        number. */
         
         ++varNum; // Adds one to the begnning number (0) to keep the loop going until 10. 
    }

    return 0;
}           // End of main function. 

/*
    Leonardo Gonzalez   1/18/2024

    Oops! Shall We Try Again?

    Write a generalized input-validation function. This function should take in one or more arguments for the bounds, 
    prompts, and messages and provide an interface for a user to enter a value under some conditions. After the user 
    selects a valid value, the function should return the value.
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    bool valid = false; //Flag
    
    while (!valid) {            //Loops until user enters a valid number
        
        cout << "Input a Value (0-100): " << endl;  //Prompts User to enter number 

        cin >> num;

        if (num >= 0 && num <= 100) {               //Checks if user entered value within 0-100
            cout << "Value: " << num << endl;
            valid = true;                           //Valid number, end loop
        }
        else {
            cout << "Invalid Value, Try again.\n" << endl;      //Invalid number, loops
        }
    }
    return 0;
}

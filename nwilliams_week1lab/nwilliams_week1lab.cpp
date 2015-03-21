//  CSC 125 - Online
//  nwilliams_week1lab.cpp
//  Author: Nick Williams on 2/2/15.
//  Description:
//      This program displays a menu that lists User options for mathematical computations.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int user_selection;
    
    cout << "Welcome to CSC 125 Review!\n\n";
    
    // do while Re-Generates Main Menu Until User Quit Command
    do
    {
        // Main Menu Generation to Screen
        cout << "MAIN MENU\n\n";
        cout << "Please Choose One of the Following Calculations\n";
        cout << "by Entering the Integer Value that\n";
        cout << "Corresponds to your Selection (1 - 5)\n\n";
        cout << "1 - Volume and Surface Area\n";
        cout << "2 - Even/Odd\n";
        cout << "3 - Factorial!\n";
        cout << "4 - Powers of X\n";
        cout << "5 - QUIT\n\n";
        cout << "Your Selection: ";
        
        cin >> user_selection;
        while (!cin) //Throws an error if alpha char entered
        {
            cin.clear();
            cin.ignore();
            cout << "Please enter specifically 1, 2, 3, 4, or 5: ";
            
            cin >> user_selection;
        }
        
            switch (user_selection)
            {
                case 1: //Volume and Surface Area
                {
                    float dimension[3] = {0, 0, 0};
                    float volume = 0;
                    float surface_area = 0;
                    string dim_title[3] = {"length", "width", "height"};
                    
                    cout << "**Volume and Surface Area**\n\n";
                    cout << "Please Enter the Dimensions of a Box\n\n";
                    
                    // Retrieves User Input and Stores Values into an Array
                    for (int i = 0; i < 3; i++) //Iterates through 3 dimensions
                    {
                        cout << dim_title[i] + ": ";
                        cin >> dimension[i];
                        
                        while ((dimension[i] <= 0) || (!cin)) //Throws error for neg# or alpha char
                        {
                            cout << "You must enter a postive numerical value!\n\n";
                            cin.clear();
                            cin.ignore();
                            cout << dim_title[i] + ": ";
                            cin >> dimension[i];
                        }
                    }
                    
                    // Calculations for Volume & Surface Area
                    volume = (dimension[0] * dimension[1] * dimension[2]);
                    surface_area = (2 * ((dimension[0] * dimension[1]) +
                                         (dimension[1] * dimension[2]) +
                                         (dimension[2] * dimension[0])));
                    
                    // Displays Final Calculations
                    cout << "Thanks! With sides of lengths ";
                    cout << fixed << setprecision(2) << dimension[0] << ", ";
                    cout << fixed << setprecision(2) << dimension[1] << ", and ";
                    cout << fixed << setprecision(2) << dimension[2] << ",\n";
                    cout << "The Volume of your Box is ";
                    cout << fixed << setprecision(2) << volume << " Cubed Units.\n";
                    cout << "The Surface Area of your Box is ";
                    cout << fixed << setprecision(2) << surface_area << " Units Square.\n\n";
                    cout << scientific;
                    
                    cout << "Press Enter to Return to Main Menu\n";
                    
                    cin.get();
                    cin.ignore();
                    
                    break;
                }
                case 2: //Even/Odd
                {
                    int user_input;
                    
                    cout << "**Even/Odd**\n\n";
                    cout << "Please Enter a Positive Integer: ";
                    
                    cin >> user_input;
                    
                    while ((user_input <= 0) || (!cin)) //Throws error for neg# or alpha char
                    {
                        cout << "You must enter a postive integer: ";
                        cin.clear();
                        cin.ignore();
                        cin >> user_input;
                    }
                    
                    if (user_input % 2 == 0) //Calculation for Even
                    {
                        cout << "You Entered an EVEN Number!\n\n";
                        cout << "Here are the even numbers up to yours: \n";
                        
                        for (int i = 0; i <= user_input; i += 2)
                        {
                            cout << i << " ";
                        }
                    }
                    else //Default if Odd
                    {
                        cout << "You Entered an ODD Number!\n\n";
                        cout << "Here are the odd numbers up to yours: \n";
                        
                        for (int i = 1; i <= user_input; i += 2)
                        {
                            cout << i << " ";
                        }
                    }
                    
                    cout << "\n\nPress Enter to Return to Main Menu\n";
                    
                    cin.get();
                    cin.ignore();
                    
                    break;
                }
                case 3: //Factorial
                {
                    int user_input;
                    unsigned long final_calculation = 1;
                    
                    cout << "**Factorial!**\n\n";
                    cout << "Please Enter a Positive Integer between 1 and 20: ";
                    
                    cin >> user_input;
                    
                    while ((user_input <= 0) || (user_input > 20) || (!cin))
                    {
                        cout << "You must enter a postive integer between 1 and 20: ";
                        cin.clear();
                        cin.ignore();
                        cin >> user_input;
                    }
                    
                    for (int i = user_input; i > 0; i--) //Factorial Calculation
                    {
                        final_calculation *= i;
                    }
                    
                    cout << endl << user_input << " Factorial equals " << final_calculation << endl;
                    
                    cout << "\n\nPress Enter to Return to Main Menu\n";
                    
                    cin.get();
                    cin.ignore();
                    
                    break;
                }
                case 4: //X^n
                {
                    int base;
                    int exponent;
                    unsigned long final_calculation = 1;
                    
                    cout << "**Powers of X**\n\n";
                    cout << "Please Enter a Positive Integer Base and Exponent between 1-15: \n\n";
                    cout << "Base: ";
                    cin >> base;
                    
                    while ((base <= 0) || (base > 15) || (!cin))
                    {
                        cout << "You must enter a postive integer between 1 and 15: ";
                        cin.clear();
                        cin.ignore();
                        cin >> base;
                    }
                    
                    cout << "Exponent: ";
                    cin >> exponent;
                    
                    while ((exponent <= 0) || (exponent > 15))
                    {
                        cout << "You must enter a postive integer between 1 and 15: ";
                        cin >> exponent;
                    }
                    
                    for (int i = exponent; i > 0; i--) //Factorial Calculation
                    {
                        final_calculation *= base;
                    }
                    
                    cout << endl << base << " to the power of " << exponent
                    << " Equals: " << final_calculation << endl;
                    
                    cout << "\n\nPress Enter to Return to Main Menu\n";
                    
                    cin.get();
                    cin.ignore();
                    
                    break;
                }
                case 5: //Quit
                {
                    break;
                }
                default: //Invalid Input
                {
                    break;
                }
            }
    } while (user_selection != 5);
    
    cout << "Thank you, and Enjoy Your Day!";
}

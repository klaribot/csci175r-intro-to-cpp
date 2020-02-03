#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double gallons, miles; //Input
    double milesPerGallon; //Output

    // Populate variables with predetermined values
    gallons = 15;
    miles = 375;

    // DEBUG: Show the values of pre-populated variables on terminal
    cout << "Gallons the car can hold: " << gallons << endl;
    cout << "Miles the car can travel: " << miles << endl;

    // Divide miles by gallons to get milesPerGallon
    milesPerGallon = miles / gallons;

    // Show the miles per gallon of these values on terminal
    cout << "This car gets " << milesPerGallon << " miles per gallon." << endl;

    // Exit program
    return(0);
}

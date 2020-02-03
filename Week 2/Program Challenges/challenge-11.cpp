#include <iostream>
#include <array>
using namespace std;

int main()
{
    // Declare variables
    double gallons; //Input
    double milesPerGallon [2] = {23.5 /*Town*/, 28.9 /*Highway*/}; //First value is MpG when in town, second value is MpG when on highway
    double distanceTown, distanceHighway; //Output

    // Populate variables with predetermined values
    gallons = 20;

    // DEBUG: Show the values of pre-populated variables on terminal
    cout << "Gallons the car can hold: " << gallons << endl;
    cout << "Miles per Gallon: " << endl;
    cout << "\t   In town: " << milesPerGallon[0] << endl;
    cout << "\tOn Highway: " << milesPerGallon[1] << endl;
    cout << endl;

    // Multiply gallons by milesPerGallon for each value and store in variable
    distanceTown = gallons * milesPerGallon[0];
    distanceHighway = gallons * milesPerGallon[1];

    // Show the distances of each value on terminal
    cout << "Distance the car can travel in miles: " << endl;
    cout << "\t   In town: " << distanceTown << endl;
    cout << "\tOn Highway: " << distanceHighway << endl;

    // Exit program
    return(0);
}

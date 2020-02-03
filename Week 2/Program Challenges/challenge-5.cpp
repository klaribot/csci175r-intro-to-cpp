#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double a, b, c, d, e; //Input
    double sum, avg; //Output

    // Populate variables with predetermined values
    a = 28;
    b = 32;
    c = 37;
    d = 24;
    e = 33;

    // DEBUG: Show the values of each pre-populated variable on terminal
    cout << "Values: " << a << ", " << b << ", " << c << ", " << d << ", " << e << endl;

    // Add all values and store in sum
    sum = a + b + c + d + e;

    // DEBUG: Show the sum of our values on terminal
    cout << "Sum: " << sum << endl;

    // Divide sum by 5 and store in avg
    avg = sum / 5;

    // Show the final average of our values on terminal
    cout << "Average: " << avg << endl;

    // Exit program
    return(0);
}

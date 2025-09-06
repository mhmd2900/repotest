#include <iostream>
using namespace std;

int main() {
    double number = 5.0;      // Number to find square root
    double x = number;        // Initial guess
    double y = 1.0;           // Second guess
    double epsilon = 0.00001; // Precision

    while (x - y > epsilon) {
        x = (x + y) / 2;
        y = number / x;
    }

    cout << "Square root of " << number << " is " << x << endl;
    return 0;
}

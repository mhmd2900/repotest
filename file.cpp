#include <iostream>
using namespace std;

// Manual square root function using Newton-Raphson method
double manualSqrt(double num) {
    if (num < 0) return -1; // Indicate invalid for negative input
    double x = num;
    double y = 1;
    double e = 0.00001; // Set accuracy
    while (x - y > e) {
        x = (x + y) / 2;
        y = num / x;
    }
    return x;
}

int main() {
    double a, b, c;
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    double discriminant = b * b - 4 * a * c;
    cout << "Equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    if (discriminant >= 0) {
        double sqrtDisc = manualSqrt(discriminant);
        double x1 = (-b + sqrtDisc) / (2 * a);
        double x2 = (-b - sqrtDisc) / (2 * a);
        cout << "Root 1: " << x1 << endl;
        cout << "Root 2: " << x2 << endl;
    } else {
        double sqrtDisc = manualSqrt(-discriminant);
        double realPart = -b / (2 * a);
        double imagPart = sqrtDisc / (2 * a);
        cout << "Complex Root 1: " << realPart << " + " << imagPart << "i" << endl;
        cout << "Complex Root 2: " << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
}


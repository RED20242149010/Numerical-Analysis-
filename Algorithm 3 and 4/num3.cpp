#include <iostream>
#include <cmath>
using namespace std;

#define EPSILON 0.01

// Function definition
double func(double x) {
    return x*x - 4*x - 10;
}

// Bisection method function
void bisection(double a, double b, int max_iter) {

    if (func(a) * func(b) > 0) {
        cout << "Invalid interval. No sign change.\n";
        return;
    }

    // If root already exists at endpoints
    if (func(a) == 0) {
        cout << "Root is: " << a << endl;
        return;
    }
    if (func(b) == 0) {
        cout << "Root is: " << b << endl;
        return;
    }

    double c;
    int iter = 0;

    // Table header
    cout << "\nIter\ta\t\tb\t\tc\t\tf(c)\t\tf(a)*f(c)\n";
    cout << "-----------------------------------------------------------------\n";

    while ((b - a) >= EPSILON && iter < max_iter) {

        c = (a + b) / 2;

        double fa = func(a);
        double fc = func(c);

        iter++;

        // Print iteration row
        cout << iter << "\t"
             << a << "\t\t"
             << b << "\t\t"
             << c << "\t\t"
             << fc << "\t\t"
             << fa * fc << endl;

        // stopping condition
        if (fabs(fc) < EPSILON)
            break;

        // interval update
        if (fa * fc < 0)
            b = c;
        else
            a = c;
    }

    cout << "\nApproximate root: " << c << endl;
    cout << "Total iterations: " << iter << endl;
}

// Main function
int main() {

    char choice;

    do {
        double a, b;
        int max_iter;

        cout << "\nEnter interval [a, b]: ";
        cin >> a >> b;

        cout << "Enter maximum number of iterations: ";
        cin >> max_iter;

        cout << "f(a) = " << func(a) << endl;
        cout << "f(b) = " << func(b) << endl;

        bisection(a, b, max_iter);

        cout << "\nDo you want to try again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended.\n";

    return 0;
}
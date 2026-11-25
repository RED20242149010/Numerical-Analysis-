#include <iostream>
#include <cmath>
using namespace std;

#define EPSILON 0.01

// Function definition
double f(double x) {
    return x*x*x - 2*x - 5;
}

int main() {

    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {

        double a, b, x_r;
        int max_iter;

        cout << "Enter lower guess a: ";
        cin >> a;

        cout << "Enter upper guess b: ";
        cin >> b;

        cout << "Enter maximum number of iterations: ";
        cin >> max_iter;

        if (f(a) * f(b) >= 0) {
            cout << "Invalid guesses. f(a) and f(b) must have opposite signs.\n";
        } else {

            int iter = 0;

            cout << "\nIter\ta\t\tb\t\tc (xr)\t\tf(c)\n";
            cout << "---------------------------------------------------------\n";

            while (iter < max_iter) {

                x_r = a - f(a) * (b - a) / (f(b) - f(a));

                cout << iter + 1 << "\t"
                     << a << "\t\t"
                     << b << "\t\t"
                     << x_r << "\t\t"
                     << f(x_r) << endl;

                iter++;

                if (fabs(f(x_r)) < EPSILON)
                    break;

                if (f(a) * f(x_r) < 0)
                    b = x_r;
                else
                    a = x_r;
            }

            cout << "\nApproximate root: x = " << x_r << endl;
            cout << "Total iterations used: " << iter << endl;
        }

        cout << "Do you want to find another root? (y/n): ";
        cin >> choice;
        cout << endl;
    }

    cout << "Program ended." << endl;
    return 0;
}
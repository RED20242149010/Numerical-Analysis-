#include <iostream>
#include <cmath>

using namespace std;

#define EPSILON 0.01

double f(double x) {
    return x*x - 4*x - 10;
}

int main() {

    double an = 1.0;
    double an_1 = -4.0;
    double an_2 = -10.0;

    double x_max = sqrt(pow((an_1 / an), 2) - 2 * (an_2 / an));

    cout << "Boundary calculated: +/- " << x_max << endl;
    cout << "Searching for a root within [-" << x_max << ", " << x_max << "]..." << endl;

    double a = 0, b = 0;
    bool foundBracket = false;

    // find interval
    for (double i = -x_max; i < x_max; i += 1.0) {
        if (f(i) * f(i + 1) < 0) {
            a = i;
            b = i + 1;
            foundBracket = true;
            break;
        }
    }

    if (!foundBracket) {
        cout << "No root bracket found in the calculated range." << endl;
    }
    else {

        int max_iter;
        cout << "Enter maximum number of iterations: ";
        cin >> max_iter;

        cout << "Automatically selected guesses: a = " << a << ", b = " << b << endl;

        double x_r;
        int iteration = 0;

        cout << "\nIter\ta\t\tb\t\tc (xr)\t\tf(xr)\n";
        cout << "------------------------------------------------------\n";

        while (iteration < max_iter) {

            x_r = a - (f(a) * (b - a)) / (f(b) - f(a));

            cout << iteration + 1 << "\t"
                 << a << "\t\t"
                 << b << "\t\t"
                 << x_r << "\t\t"
                 << f(x_r) << endl;

            if (fabs(f(x_r)) < EPSILON)
                break;

            if (f(a) * f(x_r) < 0)
                b = x_r;
            else
                a = x_r;

            iteration++;
        }

        cout << "\nApproximate root: x = " << x_r << endl;
        cout << "Total iterations used: " << iteration << endl;
    }

    return 0;
}
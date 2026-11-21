#include <iostream>
#include <cmath>
using namespace std;

#define EPSILON 0.01

double func(double x) {
    return x*x*x - x*x + 2;
}

// your original xmax function (unchanged)
double calculate_xmax() {
    double a_n = 1;
    double a_n1 = -1;
    double a_n2 = 0;

    double xmax = sqrt(pow(a_n1 / a_n, 2) - 2 * (a_n2 / a_n));
    return xmax;
}

// improved interval finder (no fallback)
bool findInterval(double &a, double &b) {

    double xmax = calculate_xmax();

    for (double i = -xmax; i <= xmax; i += 0.1) {

        double f1 = func(i);
        double f2 = func(i + 0.1);

        // exact root check
        if (fabs(f1) < EPSILON) {
            a = b = i;
            return true;
        }

        // sign change check
        if (f1 * f2 < 0) {
            a = i;
            b = i + 0.1;
            return true;
        }
    }

    return false;
}

// bisection method with full table
void bisection(double a, double b) {

    double c;
    int iter = 0;

    cout << "\nIter\ta\t\tb\t\tc\t\tf(c)\t\tf(a)*f(c)\n";
    cout << "-----------------------------------------------------------------\n";

    while (true) {

        c = (a + b) / 2;

        double fa = func(a);
        double fc = func(c);

        iter++;

        cout << iter << "\t"
             << a << "\t\t"
             << b << "\t\t"
             << c << "\t\t"
             << fc << "\t\t"
             << fa * fc << endl;

        if (fabs(fc) < EPSILON || (b - a) / 2 < EPSILON)
            break;

        if (fa * fc < 0)
            b = c;
        else
            a = c;
    }

    cout << "\nApproximate Root = " << c << endl;
    cout << "Total Iterations = " << iter << endl;
}

int main() {

    char choice;

    do {
        double a, b;

        double xmax = calculate_xmax();
        cout << "Calculated x_max = " << xmax << endl;

        if (findInterval(a, b)) {

            cout << "Initial interval: [" << a << ", " << b << "]" << endl;

            if (a == b)
                cout << "Exact Root = " << a << endl;
            else
                bisection(a, b);

        } else {
            cout << "No valid interval found!" << endl;
        }

        cout << "\nDo you want to try again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program terminated." << endl;

    return 0;
}
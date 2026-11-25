# Numerical Methods Using C++

## Overview

This repository contains two C++ programs that implement numerical methods to find the approximate roots of nonlinear equations using the **Regula Falsi (False Position) Method**.

The programs demonstrate how numerical techniques can be used to solve mathematical equations through iterative calculations.

## Programs Included

### 1. Regula Falsi Method

**File:** `regula_falsi.cpp`

This program finds the approximate root of the equation:

\[
f(x) = x^3 - 2x - 5
\]

Features:
- Takes lower and upper guesses from the user.
- Checks whether the initial guesses have opposite signs.
- Calculates the approximate root using the Regula Falsi formula.
- Displays each iteration in tabular form.
- Uses an error tolerance of 0.01.
- Allows the user to find multiple roots without restarting the program.

### 2. Regula Falsi with Automatic Boundary Detection

**File:** `regula_falsi_auto.cpp`

This program finds the approximate root of the equation:

\[
f(x) = x^2 - 4x - 10
\]

Features:
- Automatically calculates a search boundary.
- Searches for an interval containing a root.
- Automatically selects lower and upper guesses.
- Applies the Regula Falsi Method.
- Displays iteration results in tabular form.
- Uses an error tolerance of 0.01.

## Regula Falsi Formula

Both programs use the following formula to calculate the approximate root:

\[
x_r = a - \frac{f(a)(b-a)}{f(b)-f(a)}
\]

Where:

- `a` = Lower boundary
- `b` = Upper boundary
- `xr` = Approximate root
- `f(a)` = Function value at a
- `f(b)` = Function value at b

The iteration continues until the error tolerance is satisfied or the maximum number of iterations is reached.

## Technologies Used

- Programming Language: C++
- Compiler: GCC / G++
- Libraries:
  - `<iostream>` – Input and output operations
  - `<cmath>` – Mathematical calculations



## Learning Objectives

- Understand the Regula Falsi numerical method.
- Learn how to calculate approximate roots of nonlinear equations.
- Understand interval selection and sign-change conditions.
- Implement iterative numerical algorithms using C++.
- Practice mathematical programming and problem-solving.

## Author

MD.SUNZIDUL ISLAM RESHAD 

Created as a C++ numerical methods project.

## License

This project is open-source and available for educational purposes.

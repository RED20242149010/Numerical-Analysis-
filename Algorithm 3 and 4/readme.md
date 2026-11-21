# Bisection Method in C++

This repository contains two C++ implementations of the **Bisection Method**, a numerical method used to find the approximate roots of nonlinear equations.

Both programs use the Bisection Method but follow different approaches to determine the initial interval.

## 📌 Algorithms Included

### 1. Bisection Method with User-Defined Interval

**File:** `bisection_user_input.cpp`

This program implements the traditional Bisection Method, where the user provides the initial interval `[a, b]` and the maximum number of iterations.

**How it works:**
1. The user enters the initial interval `a` and `b`.
2. The program evaluates `f(a)` and `f(b)`.
3. It checks whether the interval satisfies the sign-change condition:

   `f(a) × f(b) < 0`

4. The midpoint is calculated using:

   `c = (a + b) / 2`

5. The function value at the midpoint, `f(c)`, is calculated.
6. The interval is updated based on the sign of `f(a) × f(c)`.
7. The process continues until the required accuracy is achieved or the maximum number of iterations is reached.

**Function used:**

`f(x) = x² - 4x - 10`

**Features:**
- User-defined initial interval.
- Maximum iteration limit.
- Sign-change validation.
- Endpoint root checking.
- Error tolerance (`EPSILON = 0.01`).
- Iteration table showing `a`, `b`, `c`, `f(c)`, and `f(a) × f(c)`.
- Option to run the program again.

### 2. Bisection Method with Automatic Interval Detection

**File:** `bisection_auto_interval.cpp`

This program automatically searches for a suitable initial interval before applying the Bisection Method.

Instead of asking the user to enter the interval, it calculates an `x_max` value and searches for a sign change within the calculated range.

**How it works:**
1. The program calculates `x_max` using the `calculate_xmax()` function.
2. It searches for a valid interval within `[-x_max, x_max]`.
3. The interval finder checks function values at consecutive points with a step size of `0.1`.
4. It checks for an exact root or a sign change between two consecutive points.
5. Once a valid interval is found, the Bisection Method is applied.
6. The midpoint is calculated using:

   `c = (a + b) / 2`

7. The interval is updated according to the sign of `f(a) × f(c)`.
8. The iterations continue until the function value or interval width satisfies the required accuracy.

**Function used:**

`f(x) = x³ - x² + 2`

**Features:**
- Automatic calculation of `x_max`.
- Automatic initial interval detection.
- Interval search with a step size of `0.1`.
- Exact root checking.
- Sign-change detection.
- Error tolerance (`EPSILON = 0.01`).
- Iteration table.
- Automatic application of the Bisection Method after finding an interval.
- Option to run the program again.

## 📐 Mathematical Background

The Bisection Method is based on the **Intermediate Value Theorem**.

If a continuous function satisfies:

`f(a) × f(b) < 0`

then at least one root exists between `a` and `b`.

The midpoint is calculated as:

`c = (a + b) / 2`

The interval is repeatedly divided into two halves until the approximate root reaches the desired accuracy.

## 🛠️ Technologies Used

- Programming Language: C++
- Libraries:
  - `<iostream>` – Input and output operations.
  - `<cmath>` – Mathematical operations such as `sqrt()`, `pow()`, and `fabs()`.



## 📊 Comparison of Both Algorithms

| Feature | User-Defined Interval | Automatic Interval |
|---|---|---|
| Initial interval | User input | Automatically detected |
| `x_max` calculation | No | Yes |
| Interval detection | Manual | Automatic |
| Maximum iterations | User-defined | Not specified |
| Sign-change checking | Yes | Yes |
| Bisection Method | Yes | Yes |
| Error tolerance | 0.01 | 0.01 |
| Iteration table | Yes | Yes |



## 🎯 Learning Objectives

Through these implementations, this project demonstrates:

- Understanding the Bisection Method.
- Finding roots of nonlinear equations.
- Applying numerical approximation techniques.
- Understanding interval selection and sign-change conditions.
- Implementing iterative algorithms in C++.
- Using functions and mathematical libraries in C++.

## 👨‍💻 Author
Md.Sunzidul Islam Reshad
A C++ numerical methods project demonstrating two approaches to implementing the Bisection Method.

---

⭐ If you find this project helpful, consider giving the repository a star!

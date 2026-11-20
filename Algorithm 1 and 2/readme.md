# Equation Solver Using C++

## Project Overview

This project contains two C++ programs designed to solve mathematical equations.

1. **Linear Equation Solver** – Calculates the value of `x` using two linear equations.
2. **Quadratic Equation Solver** – Calculates the roots of a quadratic equation, including real and complex roots.

Both programs allow users to perform calculations repeatedly without restarting the program.

## Algorithms Used

### 1. Linear Equation Solver Algorithm

**Equation:**

`ax + b = cx + d`

**Formula:**

`x = (d - b) / (a - c)`

**Working Procedure:**

1. Start the program.
2. Input the values of `a`, `b`, `c`, and `d`.
3. Calculate the value of `x` using the formula.
4. Display the result.
5. Ask the user whether they want to calculate again.
6. Repeat if the user enters `y` or `Y`.
7. Stop the program.

### 2. Quadratic Equation Solver Algorithm

**Equation:**

`ax² + bx + c = 0`

**Discriminant Formula:**

`D = b² - 4ac`

**Working Procedure:**

1. Start the program.
2. Input the values of `a`, `b`, and `c`.
3. Calculate the discriminant `D`.
4. Check the value of `D`:
   - If `D > 0`, calculate and display two distinct real roots.
   - If `D = 0`, calculate and display one repeated real root.
   - If `D < 0`, calculate and display two complex roots.
5. Ask the user whether they want to calculate again.
6. Repeat if the user enters `y` or `Y`.
7. Stop the program.

## Technologies Used

- Programming Language: C++
- Header Files: `iostream`, `cmath`
- Compiler: GCC / MinGW / Any Standard C++ Compiler

## Features

- Solves linear equations.
- Solves quadratic equations.
- Calculates two distinct real roots.
- Calculates repeated real roots.
- Calculates complex roots.
- Supports repeated calculations using a `do-while` loop.
- Simple and user-friendly console interface.


## Learning Objectives

- Understanding mathematical equations in programming.
- Applying arithmetic operations in C++.
- Using conditional statements (`if-else`).
- Understanding loops (`do-while`).
- Using the `sqrt()` function from the `<cmath>` library.
- Taking user input and displaying output.

## Author;
MD.Sunzidul Islam Reshad;

This project is open-source and available for educational purposes.

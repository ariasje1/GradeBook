# Grade Book Program

## Overview

The **Grade Book Program** is a C++ console application that allows a teacher to enter the names and test scores for five students, calculates each student's average score, assigns a corresponding letter grade based on their average, and displays the results. The program also provides an option to repeat the process for a new set of students.

## Features

- Input validation to ensure test scores are between 0 and 100.
- Calculates the average test score for each student.
- Assigns a letter grade (A, B, C, D, F) based on the average score.
- Displays results formatted to two decimal places for readability.
- Allows the user to repeat the process without restarting the program.

## Grading Scale

The program uses the following grading scale to assign letter grades based on the average of four test scores:

| Test Score Range | Letter Grade |
|------------------|--------------|
| 90-100           | A            |
| 80-89            | B            |
| 70-79            | C            |
| 60-69            | D            |
| 0-59             | F            |

## Program Requirements

1. **Input Handling:** 
   - The program accepts input for five students' names and their four test scores.
   - Input for test scores is validated to ensure it is between 0 and 100.
2. **Calculation and Output:**
   - The program calculates the average test score for each student and assigns a letter grade based on the grading scale.
   - Results are displayed with a precision of two decimal places for average scores.
3. **Looping Control Structure:**
   - The user is prompted to run the program again or exit after each set of inputs.
4. **Documentation:**
   - The code is fully documented with comments explaining each step and function.


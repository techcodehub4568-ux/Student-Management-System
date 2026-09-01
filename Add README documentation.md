# Student-Management-System
A beginner-friendly Student Management System developed in C++ using structures, arrays, functions, loops, and input validation.
# Student Marking & Management System

A **menu-driven Student Marking & Management System** developed in C++ to manage student academic records, including student information, subjects, marks, result records, and topper identification.

The system stores records for **3 students**, with each student having an ID, name, 3 subjects, and marks for each subject. It provides a simple command-line interface with input validation to make data entry and management more reliable.

## Features

* **Add Student Records**

  * Enter student name and ID.
  * Add 3 subjects for each student.
  * Enter marks for each subject.
  * Validates IDs to ensure numeric input.
  * Validates marks within the range of **0–100**.

* **Display Student Records**

  * Displays all stored student records.
  * Shows student name and ID.
  * Displays each subject and its corresponding marks.

* **Find Student by ID**

  * Search for a student using their ID.
  * Displays the student's name when a matching ID is found.
  * Shows a "Student not found" message when no matching record exists.

* **Update Student Marks**

  * Searches for a student using their name and ID.
  * Allows the user to select a subject.
  * Updates the marks of the selected subject.
  * Validates updated marks within the **0–100** range.
  * Displays the updated subject and new marks.

* **Show Topper**

  * Calculates the total marks of each student.
  * Compares the totals to determine the student with the highest marks.
  * Displays the topper's name, ID, and total marks.

* **Input Validation**

  * Handles invalid numeric input using `cin.fail()`.
  * Clears invalid input using `cin.clear()`.
  * Removes invalid input from the input buffer using `cin.ignore()`.
  * Validates menu choices and marks ranges.

## Concepts Used

This project demonstrates several fundamental C++ programming concepts:

* Structures (`struct`)
* Arrays
* Array of structures
* Strings
* Functions
* Nested loops
* `for` loops
* `while` loops
* `do-while` loop
* `switch` statement
* Conditional statements
* Function parameters
* Pass-by-reference through array modification
* Input validation
* `cin.fail()`, `cin.clear()`, and `cin.ignore()`
* Searching records
* Updating records
* Calculating totals
* Finding the highest value

## Technologies

* **Language:** C++
* **Interface:** Console / Command Line
* **Data Storage:** Arrays in memory

## Project Purpose

The purpose of this project is to practice and demonstrate **Programming Fundamentals in C++** by building a practical student record and marking system using structured data, functions, arrays, loops, conditions, searching, updating, and input validation.

This project focuses on implementing core programming logic without using a database or advanced external libraries.

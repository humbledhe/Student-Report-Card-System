# Student Report Card System

## Overview

The Student Report Card System is a C++14 console application for managing student records. It provides a simple menu-driven interface to add, view, and delete students, as well as import student data from a file. The system is designed for use in Visual Studio 2022.

## Features

- **Add Student**: Enter a student's name and GPA (max 5.0).
- **View All Students**: Display all student records with names and GPAs.
- **Delete Student**: Remove a student by name.
- **Import Students from File**: Load student records from a text file.
- **Menu System**: Easy-to-use console menu.

## Usage

1. **Build the Project**
   - Open the solution in Visual Studio 2022.
   - Build the project using the default configuration.

2. **Run the Application**
   - Start the program. You will see a menu:
     ```
     1. Add student
     2. View student
     3. View all students
     4. Delete student
     5. Exit
     ```
   - Enter the number corresponding to your desired action.

3. **Add Students**
   - Select option 1.
   - Enter the student's name and GPA (must be ? 5.0).

4. **View All Students**
   - Select option 3 to display all student records.

5. **Delete a Student**
   - Select option 4.
   - Enter the student's name to remove their record.

6. **Import from File**
   - Use the `addFromFile` method in the `Student` class to load students from a file.
   - The file should contain lines in the format:
     ```
     <name> <gpa>
     ```

## Example Student File

## Code Structure

- **main.cpp**: Entry point, handles user interaction and menu logic.
- **Student.h / Student.cpp**: Defines the `Student` class, manages student records, file import, and menu display.
- **StudentDetails**: Represents individual student data (name and GPA).

## Requirements

- C++14 or later
- Visual Studio 2022

## Notes

- GPA must not exceed 5.0.
- Deleting a student removes all records matching the given name.
- Input validation is performed for GPA entry.

## License

This project is provided for educational purposes.
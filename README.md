# Cpp-Assignment
Smart Campus Management System (SCMS)
This project is a console-based C++ application developed for Assignment-1 and Assignment-2 of the course Object Oriented Programming using C++.

The system demonstrates the use of OOP concepts, file handling, and logging to manage different campus activities.

Student Details

Name: Aditya Sajgotra
Roll No: 241103025
Course: Object Oriented Programming using C++
Course Code: CST3301
Features

User Registration and Login

Role-based access (Admin, Teacher, Student)

Course and Enrollment Management

Attendance Management

Examination and Marks Management

Library Management

File handling using fstream

Logging system for all major actions

Folder Structure src/ -> Source files
include/ -> Header files
data/ -> Text data files
logs/ -> Log file
build/ -> Executable file

Compilation Command g++ -std=c++11 src/main.cpp src/logger.cpp src/AuthManager.cpp src/CourseManager.cpp src/AttendenceManager.cpp src/examManager.cpp src/LibraryManager.cpp -I include -o build/main.exe

Run Program ./build/app.exe

UML Diagrams

UML class diagrams are created separately for:

Assignment-1 (Core system)

Assignment-2 (Extended modules)

Conclusion

This project fulfills all the requirements of Assignment-1 and Assignment-2 and demonstrates the practical implementation of Object Oriented Programming concepts in C++
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    string id;

public:
    Person(string n, string i);
    virtual void printProfile();
};

class Student : public Person {
public:
    Student(string n, string i);
    void printProfile();
};

class Teacher : public Person {
public:
    Teacher(string n, string i);
    void printProfile();
};

class Admin : public Person {
public:
    Admin(string n, string i);
    void printProfile();
};

class User : public Person {
public:
    User(string n, string i);
    void printProfile();
};

#endif

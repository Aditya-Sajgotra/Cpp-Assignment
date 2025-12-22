#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
protected:
    string name;
    string id;

public:
    Person(string n, string i);
    virtual void printProfile();
};

class Student : public Person
{
public:
    Student(string n, string i);
    void printProfile();
};

class Teacher : public Person
{
    int salary;
    string dept;
    string course;

public:
    Teacher(string n, string e, int s, string d, string c);
    void printProfile();
    string getDept();
    string getCourse();
};

class Admin : public Person
{
    string empId;
    string adminLevel;

public:
    Admin(string n, string i, string e, string al );
    void printProfile();
    string getAdmin();
    string getEmpid();
};

class User : public Person
{
    string username;
    string password;

public:
    User(string n, string i, string u, string p);
    void printProfile();
    string getuser();

};

#endif

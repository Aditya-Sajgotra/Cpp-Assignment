#include "../include/person.h"
#include <iostream>

using namespace std;

Person::Person(string n, string i)
{
    name = n;
    id = i;
}

// Person::~Person() {}

void Person::printProfile()
{
    cout << "Name :" << name << endl;
    cout << "Email :" << id << endl;
}

Student::Student(string n, string i) : Person(n, i) {}

void Student::printProfile()
{
    cout << "Student Name: " << name << " ID: " << id << endl;
}

Teacher::Teacher(string n, string i, int s, string d, string c)
    : Person(n, i)
{
    salary = s;
    dept = d;
    course = c;
}

void Teacher::printProfile()
{
    cout << "Teacher Name: " << name << " ID: " << id << "Dept:" << dept << endl;
}
string Teacher::getDept()
{
    return dept;
}

string Teacher::getCourse()
{
    return course;
}

Admin::Admin(string n, string i, string e, string al) : Person(n, i)
{
    empId = e;
    adminLevel = al;
}

void Admin::printProfile()
{
    cout << "Admin Name: " << name << " ID: " << id << endl;
}

string Admin::getAdmin()
{
    return adminLevel;
}
string Admin::getEmpid()
{
    return empId;
}

User::User(string n, string i, string u, string p) : Person(n, i)
{
    username = u;
    password = p;
}

void User ::printProfile()
{
    cout << "User Name: " << username << " ID: " << id << endl;
}
string User ::getuser()
{
    return username;
}

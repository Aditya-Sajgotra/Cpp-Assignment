#include "../include/person.h"
#include <iostream>

using namespace std;


Person::Person(string n, string i) {
    name = n;
    id = i;
}

// Person::~Person() {}

void Person::printProfile() {
    cout << "Name :" << name << endl;
    cout << "Email :" << id << endl;
}

Student::Student(string n, string i) : Person(n, i) {}

void Student::printProfile() {
    cout << "Student Name: " << name << " ID: " << id << endl;
}

Teacher::Teacher(string n, string i) : Person(n, i) {}

void Teacher::printProfile() {
    cout << "Teacher Name: " << name << " ID: " << id << endl;
}

Admin::Admin(string n, string i) : Person(n, i) {}

void Admin::printProfile() {
    cout << "Admin Name: " << name << " ID: " << id << endl;
}

User::User(string n, string i) : Person(n, i) {}

void User :: printProfile(){
    
}

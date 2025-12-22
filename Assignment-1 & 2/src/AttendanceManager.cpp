#include "../include/AttendanceManager.h"
#include <fstream>
#include<iostream>
using namespace std;

AttendanceManager::AttendanceManager(Logger &l): log(l){}

void AttendanceManager ::loadAttendance(){
    records.clear();
    ifstream file("data/Attendance.txt");

    string d,c,n,s;
    while(file>>d>>c>>n>>s){
        records.push_back(Attendance(d,c,n,s));
    }
    file.close();

}

void AttendanceManager ::saveAttendance(){
    ofstream file("data/Attendance.txt");
    for(auto &r : records){
        file<<r.date<<" "
        <<r.course<<" "
        <<r.name<<" "
        <<r.status<<endl;
    }
    file.close();
}

void AttendanceManager::markAttendance(){
    string date, course, name, status;

    cout<<"Enter the date :";
    cin>>date;
    cout<<"Enter the course :";
    cin>>course;
    cout<<"Enter the username :";
    cin>>name;
    cout<<"Mark Present(P) or Absent(A)";
    cin>>status;

    records.push_back(Attendance(date, course, name, status));
    saveAttendance();
    cout<<"Attendance Marked!"<<endl;
}
void::AttendanceManager::viewAttendance(){
string user;
cout<<"ENter the username to view Attendance";
cin>>user;
cout<<endl<<"Attendance for "<<user<<endl;

for(auto &r:records){
    if (r.name == user){
        cout<<r.course<<" "<<r.date<<" "<<r.status<<" ";
    }

    log.log("Attendance Viewed for user" + user);
}}
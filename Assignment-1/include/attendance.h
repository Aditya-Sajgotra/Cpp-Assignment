
#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <string>
using namespace std;

class Attendance {
public:
    string date;
    string course;
    string name;
    string status;

    Attendance() {}

    Attendance(string d, string c, string n, string s) {
        date = d;
        course = c;
        name = n;
        status = s;
    }
};

#endif

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include<vector>
using namespace std;

class Course {
public:
    string id;
    string title;
    int credits;
    int capacity;
    vector <string> enrolledStudents;

    Course(string i, string t, int c, int cap);
    void printCourse();
};



#endif

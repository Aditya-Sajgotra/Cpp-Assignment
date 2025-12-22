#include "../include/course.h"
#include "../include/logger.h"
#include <fstream>

Course::Course(string i, string t, int c, int cap) {
    id = i;
    title = t;
    credits = c;
    capacity = cap;
}

// void CourseManager::addCourse(Course c) {
//     ofstream file("data/courses.txt", ios::app);
//     file << c.id << " " << c.title << " " << c.credits << endl;
//     file.close();

//     Logger::log("INFO", "COURSE", "Course Added");
// }

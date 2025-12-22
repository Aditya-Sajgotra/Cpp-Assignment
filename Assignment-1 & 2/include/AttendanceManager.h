
#ifndef ATTENDANCEMANAGER_H
#define ATTENDANCEMANAGER_H
#include<vector>
#include "attendance.h"
#include "logger.h"

class AttendanceManager{
    vector<Attendance> records;
    Logger &log;
    
    public:
    AttendanceManager(Logger &log);

    void saveAttendance();
    void loadAttendance();
    void markAttendance();
    void viewAttendance();
};
#endif

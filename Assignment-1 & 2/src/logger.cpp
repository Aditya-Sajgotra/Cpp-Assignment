#include "../include/logger.h"
#include <ctime>
#include<iostream>

using namespace std;

Logger::Logger(){};

void Logger::init() {
    file.open("logs/scms.log", ios::app);
}

void Logger::log(string message) {
    // file.open("../logs/scms.log", ios::app);
    // cout << " writing log -> " << message << endl;
    if(!file.is_open()){
        cout<<"Log file not opened ";
        cout <<"Try again";
        
    }
    else{
        time_t now = time(0);
        string t = ctime(&now);
        t.pop_back();
        file << "[" << t <<"]";
        file << " " << message;
    }
    // file.close();
}

void Logger::close() {
    if(file.is_open()){
        file.close();
    }
}

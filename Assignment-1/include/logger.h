#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>

using namespace std;

class Logger
{
    ofstream file;
    string getTime();

public:
    Logger();
    void init();
    void log(string message);
    void close();
};

#endif

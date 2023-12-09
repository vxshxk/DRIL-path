#include <iostream>
#include <chrono>
#include <ctime>
#include <string>

#include "dlib.h"

using namespace std;


Logger::Logger(string name, int level) {
    this->name = name;
    this->level = level;
}

void Logger::logIn(string str) {
    cout << str << "\n";
    cout << this->level << "\n";
    auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << ctime(&timenow) << "\n";
}


#include <iostream>
#include <chrono>
#include <ctime>
#include <string>

using namespace std;

class Logger {
   string name;
   int level;

public:
   Logger(string name, int level);
   void logIn(string str);
};

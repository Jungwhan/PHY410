#include <iostream>
#include <fstream>
#include <string>
#ifndef StudentRecord_h
#define StudentRecord_h
class StudentRecord {
 public:
  string firstname_; string lastname_; float score_;
  bool input(istream & in) {
    string line;
    getline(in, line, ',');
    lastname_ = line;
    getline(in, line, ',');
    firstname_ = line;
    getline(in, line);
    score_ = std::atof(line.c_str());
    if (line == "")
      return false;
    else
      return true;
  }
 
};
 
#endif

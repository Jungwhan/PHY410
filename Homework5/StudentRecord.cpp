//
//  StudentRecord.cpp
//  PracticalLectureHW5
//
//  Created by Junghwan Yim on 3/11/17.
//  Copyright © 2017 Junghwan Yim. All rights reserved.
//

#include "StudentRecord.h"
using namespace std;

StudentRecord::StudentRecord(string type, string first, string last, double a, double b, double c){
  type = type; firstname_=first; lastname_=last; score1_=a; score2_=b; score3_=c;
}
StudentRecord::~StudentRecord(){};

string StudentRecord::firstname() const { return firstname_; }
string StudentRecord::lastname() const { return lastname_; }
double StudentRecord::score1() const { return score1_;}
double StudentRecord::score2() const { return score2_;}
double StudentRecord::score3() const { return score3_;}

void StudentRecord::print ( ostream & out ) const  {
  out << lastname() << "," << firstname() << "," << score1() << "," << score2()<<  "," << score3() << endl;
}

bool StudentRecord::input ( istream & in ) {
  string line;
  string temp;
  getline( in, line, ',');
  type_ = line;
  std::getline( in, line, ',');
  firstname_ = line;
  std::getline( in, line, ',');
  lastname_ = line;
  std::getline( in, line );
  score1_ = std::atof( line.c_str() );
  std::getline( in, line );
  score2_ = std::atof( line.c_str() );
  std::getline( in, line );
  score3_ = std::atof( line.c_str() );
    
  if ( line == "")
    return false;
  else
    return true;
    
    
}

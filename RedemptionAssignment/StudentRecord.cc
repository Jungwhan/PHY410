//
//  StudentRecord.cpp
//  TechnicalAssignment5
//
//  Created by Junghwan Yim on 3/24/17.
//  Copyright © 2017 Junghwan Yim. All rights reserved.
//

#include "StudentRecord.h"
using namespace std;

StudentRecord::StudentRecord(){}

string StudentRecord::firstname() const {
  return firstname_;
}
string StudentRecord::lastname() const{
  return lastname_;
};
double StudentRecord::score() const{
  return score_;
};


//virtual void print ( ostream & out = cout ) const = 0;

//virtual bool input ( istream & in ) = 0;

bool StudentRecord::operator>( StudentRecord const & right ) const{
  return this->score() > right.score();
}
bool StudentRecord::operator<( StudentRecord const & right ) const{
  return this->score() < right.score();
};
bool StudentRecord::operator>=( StudentRecord const & right ) const{
  return this->score() >= right.score();
};
bool StudentRecord::operator<=( StudentRecord const & right ) const{
  return this->score() <= right.score();
};


ostream & operator<<( std::ostream & out, StudentRecord const &right ){
  right.print(out); return out;
}
istream & operator>>( std::istream & in, StudentRecord  &right ){
  right.input(in); return in;
}

void StudentRecord::compute_score(void){
  for ( unsigned int i = 0; i < scores_.size(); ++i ) {
    double score = scores_[i];
    double weight = weights_[i];
    score_ += score * weight;
  }
}

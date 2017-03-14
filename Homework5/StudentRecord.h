//
//  StudentRecord.hpp
//  PracticalLectureHW5
//
//  Created by Junghwan Yim on 3/11/17.
//  Copyright © 2017 Junghwan Yim. All rights reserved.
//

#ifndef STUDENTRECORD_H
#define STUDENTRECORD_H

#include <iostream>
#include <string>
using namespace std;


//Base Class
class StudentRecord{
 public:
  StudentRecord(string type = "", string first ="", string last = "", double score1 = 0.0, double score2 = 0.0, double score3 = 0.0);
  ~StudentRecord();
        
  std::string firstname() const;
  std::string lastname() const;
  double score1() const;
  double score2() const;
  double score3() const;
    
  void print ( ostream & out = std::cout ) const;
        
  bool input ( istream & in );

  virtual double CalculateScore () = 0;
    
 protected:
  string type_;
  string firstname_;
  string lastname_;
  double score1_;
  double score2_;
  double score3_;
};


//Derived classes
class StudentRecordPhysics : public StudentRecord{
 public:
  StudentRecordPhysics (string last = "", string first = "", double homework =0.0, double lab =0.0);
  ~StudentRecordPhysics ();
    
  virtual double CalculateScore () const {
    return 0.8*score1_ +0.2*score2_;
        
  };

 private:
    
};

class StudentRecordHistory : public StudentRecord{
 public:
  StudentRecordHistory (string last = "", string first = "", double exam1 =0.0, double exam2 =0.0);
  ~StudentRecordHistory ();
    
  virtual double CalculateScore () const {
    if(score1_ < score2_){
      return score2_*0.6 + score1_*0.4;
    }else
      return 0.6*score1_ +0.4*score2_;
  };
    
};

class StudentRecordLiterature : public StudentRecord{
 public:
  StudentRecordLiterature (string last = "", string first = "", double analytic =0.0, double creative =0.0, double commentary =0.0);
  ~StudentRecordLiterature ();
    
  virtual double CalculateScore () const {
    return 0.4*score1_ +0.4*score2_ + 0.2*score3_;
  };

    
};


#endif /* StudentRecord_hpp */

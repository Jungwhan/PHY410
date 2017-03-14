//
//  main.cpp
//  PracticalLectureHW5
//
//  Created by Junghwan Yim on 3/11/17.
//  Copyright © 2017 Junghwan Yim. All rights reserved.
//
#include "StudentRecord.h"
#include <vector>
#include <iostream>
#include <fstream>

double calculate_average( std::vector<StudentRecord> const * records ){
  double average = 0.;
    
  if ( records->size() > 0 ) {
    for( StudentRecord const & record: *records ) {
      average += record.score1();
    }
    average /= records->size();
  }
  return average;
}

int main(int argc, char * argv[]){
    
  if ( argc < 2 ) {
    std::cout << "Usage: " << argv[0] << " filename.txt" << std::endl;
    return 0;
  }
  std::ifstream fin( argv[1] );
  std::vector<StudentRecord> records;
  //ììì íìí ëìì êêì ëë êì ìí
  StudentRecord record;
  while( record.input(fin) ) {
    records.push_back(record);
    std::cout << "Added record: ";
    record.print();
  }

  std::cout << "Average : " << calculate_average( &records ) << std::endl;
}

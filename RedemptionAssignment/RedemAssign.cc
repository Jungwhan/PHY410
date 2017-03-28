//
//  Created by Junghwan Yim on 3/24/17.
//  Copyright © 2017 Junghwan Yim. All rights reserved.
//

#include <iostream>
#include "StudentRecordPhysics.h"
#include "StudentRecordHistory.h"
#include "StudentRecordLiterature.h"
#include <fstream>

float calulate_total ( std::vector<std::shared_ptr<StudentRecord> > const & records ) {
  float tot = 0.0;
  if ( records.size() == 0 ) {
    std::cout << "Error.... none given" << std::endl;
    return tot;
  }
  for ( auto const & rec : records ) {
    tot += rec->score();
  }
  return tot;
}

float calulate_average( std::vector<std::shared_ptr<StudentRecord> > const & records ) {
  float avg = 0.0;
  if ( records.size() == 0 ) {
    std::cout << "Error.... none given" << std::endl;
    return avg;
  }
  for ( auto const & rec : records ) {
    avg += rec->score();
  }
  avg /= records.size();
  return avg;
}

int main(int argc, char * argv[]){
    
  if ( argc < 2 ) {
    std::cout << "Usage: " << argv[0] << " filename.txt" << std::endl;
    return 0;
  }
  std::ifstream fin( argv[1] );
    
    
  std::vector<std::shared_ptr<StudentRecord> > records, physics, literature, history;
  bool valid = true;
  while( valid ) {
    std::string line;
    std::getline( fin, line, ',');
    if ( line == "" )
      break;
        
    if ( line == "Physics" ) {
      std::shared_ptr<StudentRecord> irecord( new StudentRecordPhysics() );
      valid = irecord->input(fin);
      if ( valid ) {
	records.push_back( irecord );
	physics.push_back( irecord );
      }
      else
	break;
    } else if ( line == "Literature" ) {
      std::shared_ptr<StudentRecord> irecord( new StudentRecordLiterature() );
      valid = irecord->input(fin);
      if ( valid ) {
	records.push_back( irecord );
	literature.push_back( irecord );
      }
      else
	break;
    } else if ( line == "History" ) {
      std::shared_ptr<StudentRecord> irecord( new StudentRecordHistory() );
      valid = irecord->input(fin);
      if ( valid ) {
	records.push_back( irecord );
	history.push_back( irecord );
      }
      else
	break;
    } else {
      std::cout << "Invalid input, ignoring" << std::endl;
      continue;
    }
        
  }
    
  std::cout << "Physics Class : "<< std::endl;
  std::sort( physics.begin(), physics.end());
  for ( auto const & rec: physics ) {
    rec->print( std::cout );
  }
  std::cout << endl;
    
  std::cout << "History Class : " << std::endl;
  std::sort( history.begin(), history.end());
  for ( auto const & rec: history ) {
    rec->print( std::cout );
  }
  std::cout << endl;
    
  std::cout << "Literature Class : " << std::endl;
  std::sort( literature.begin(), literature.end());
  for ( auto const & rec: literature ) {
    rec->print( std::cout );
  }
  std::cout << endl;

  std::cout << "Total Class : " << std::endl;
  std::sort( records.begin(), records.end());
  for ( auto const & rec: records ) {
    rec->print( std::cout );
  }
  std::cout << endl;
    
  std::cout << "Total score : " << calulate_total( records ) << std::endl;
}

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "StudentRecord.h"
using namespace std;
 
StudentRecord SR;
string filename;
vector<float> SRV;
 
float ave() {
  int numStu = SRV.size();
  float sum = 0.;
  float ave = 0.;
  vector<float>::iterator it;
  for (it = SRV.begin(); it != SRV.end(); it++)
    {
      sum = sum + *it;
    }
  ave = sum / numStu;
  return ave;
}
 
int main(int argc, char * argv[]) {
      
  cout << "Enter the filename" << endl;
  cin >> filename;
 
  ifstream ist;
  ist.open(filename);
  while (SR.input(ist)) {
    SRV.push_back(SR.score_);
  }
  std::cout <<"average =" <<ave() << std::endl;
  return 0;
 
 
}

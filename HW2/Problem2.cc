#include<iostream>
using namespace std;
int main(void) {
  int i1 = 2, i2 = 5, i3 = -3;
  double d1 = 2.0, d2 = 5.0, d3 = -0.5;
  //Evaluate each of the following C++ expressions.
  cout << i1 + (i2 * i3) << endl; //-13
  cout << i1 * (i2 + i3) << endl; //4
  cout << i1 / (i2 + i3) << endl; //1
  cout << i1 / i2 + i3 << endl; //-3
  cout << 3 + 4 + 5 / 3 << endl; //8
  cout << (3 + 4 + 5) / 3 << endl; //4
  cout << d1 + (d2 * d3) << endl; //-0.5
  cout << d1 + d2 * d3 << endl; //-0.5
  cout << d1 / d2 - d3 << endl; //0.9
  cout << d1 / (d2 - d3) << endl; // 0.363636
  cout << d1 + d2 + d3 / 3 << endl; //6.83333
  cout << (d1 + d2 + d3) / 3 << endl; //2.16667
  cout << d1 + d2 + (d3 / 3) << endl; //6.83333
  cout << 3 * (d1 + d2) * (d1 - d3) << endl; //52.5
}

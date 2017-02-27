#include<iostream>
#include<cmath>
using namespace std;

unsigned int Factorial(unsigned int x) {
  unsigned int out = 1;
  for (unsigned int i = 1; i <= x; i++) {
    out = out * i;
  }
  return out;
}

int main() {
  unsigned x = 0;
  cout << "Please type the number which for the factorials :";
  do {
    cout << endl << "(NOTE: the number could not exceed 20) ";
    cin >> x;
  } while (x >= 20); {
    cout << endl << "Factorial result = " << Factorial(x)<<endl;

  }
  return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

float CalculMagni(float x, float y) {
  float mag =0.0;
  mag = sqrt(x*x + y*y);
  return mag;
}

int main(void) {
  float minx = 0.0;
  float miny = 0.0;
  float minmag = numeric_limits<float>::max();

  float xi = 0.0, yi = 0.0;

  while (cin >> xi >> yi) {
    if (CalculMagni(xi, yi) < minmag) {
      minmag = CalculMagni(xi, yi);
      minx = xi;
      miny = yi;
      cout << "the minimum magnitude is "<< minmag << " at the point ("<<xi << "," << yi <<")"<< endl;
    }
    //cout << xi << "," << yi << endl;
  }

  return 0;
}

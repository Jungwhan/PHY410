#include <iostream>
using namespace std;

double midpointx(double x1, double x2) {
  double mpx = (x1 + x2) / 2;
  return mpx;
}
double midpointy(double y1, double y2) {
  double mpy = (y1 + y2) / 2;
  return mpy;
}
double slope(double x1, double x2, double y1, double y2) {
  double slope = (y1 - y2) / (x1 - x2);
  return slope;
}
double itcp(double x1, double x2, double y1, double y2) {
  double itcp = midpointy(y1, y2) - midpointx(x1, x2)*slope(x1, x2, y1, y2);
  return itcp;
}
double initcp(double x1, double x2, double y1, double y2) {
  double itcp = y1 + x1*slope(x1, x2, y1, y2);
  return itcp;
}
int main(void) {
  double x1, x2, y1, y2;
  cout << "please input the first point's x value :";
  cin >> x1;
  cout << "please input the first point's y value :";
  cin >> y1;
  cout << "please input the second point's x value :";
  cin >> x2;
  cout << "please input the second point's y value :";
  cin >> y2;
  cout << "midpoint : (" << midpointx (x1, x2) << ", " << midpointy(y1, y2) << ")" << endl;
  cout << "slope : " << slope(x1, x2, y1, y2) << endl;
  cout << "y-intercept : " << itcp(x1, x2, y1, y2) << endl;
  cout << "The equation for the line between them : y ="<< slope(x1,x2,y1,y2) <<"x + " <<
    itcp(x1,x2,y1,y2)<<endl;
  cout << "the equation for the line perpendicular to it that passes through the first point : y = " << (-
													 1)*slope(x1,x2,y1,y2) << "x + " << initcp(x1, x2, y1, y2) << endl;
  return 0;
}

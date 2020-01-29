#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.14159265359;


double AreaOfCyl(double radius, double height) {
  cout<<"the area of this cylinder is "<<(2 * PI * radius * height)+(2 * PI * pow(radius,2))<<endl;
  return 0;
}

double AreaOfCir(double radius) {
  cout<<"the area of this circle is "<<(PI * pow(radius,2))<<endl;
  return 0;
}

double AreaOfRect(double base, double height) {
  cout<<"the area of this rectangle is "<<(base * height)<<endl;
  return 0;
}

int main() {
  cout<<fixed<<setprecision(2);
  AreaOfCyl(2,5);
  AreaOfCir(3);
  AreaOfRect(4,5);

  return 0;
}

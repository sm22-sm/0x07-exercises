#include <iostream>
#include <cmath>
#include "test_util.h"
#include "triangle.h"
using namespace std;


int main() {

 class Triangle{
  private:
     double a,b,c;
 bool isTriangleValid(double a, double b, double c) const {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }
 public:

Triangle():a(2),b(3),c(4){}
Triangle(double a, double b, double c){
setSides:(a,b,c);
}
void setSides(double a, double b, double c) {
   if (isTriangleValid(a, b, c)) {
            this->a = a;
            this->b = b;
            this->c = c;
        } else {
            cout << "Ugyldig side. Kan ikke ændre værdierne." << endl;
        }
    }

double getA() const { return a; }
double getB() const { return b; }
double getC() const { return c; }
void  setA(double a){
    if (isTriangleValid(a, this->b, this->c)) {
        this->a = a;
    } else {
        cout << "Ugyldig side. Kan ikke ændre værdien af a." << endl;
    }
}
void setB (double b){
    if (isTriangleValid(this->a, b, this->c)) {
        this->b = b;
    } else {
        cout << "Ugyldig side. Kan ikke ændre værdien af b." << endl;
    }
}
void setC (double c){
    if (isTriangleValid(this->a, this->b, c)) {
        this->c = c;
    } else {
        cout << "Ugyldig side. Kan ikke ændre værdien af c." << endl;
    }
}
void setsides(double a, double b, double c);

double circumference()const {
    return a + b + c;
;
  }
  double area()const {
    double s = circumference() / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));;
  }
  void print()const {
    cout << "Triangle sides: a = " << a << ", b = " << b << ", c = " << c << endl;
  }
 };
  return 0;
};
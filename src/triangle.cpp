#include "triangle.h"

Triangle::Triangle() {

}

void Triangle::setSides(double a, double b, double c) {
  this->a = a;
  this->b = b;
  this->c = c;
}

double Triangle::getA() const {
  return this->a;
}

double Triangle::getB() const {
  return this->b;
}
double Triangle::getC() const {
  return this->c;
}
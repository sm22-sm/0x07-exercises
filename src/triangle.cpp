#include "triangle.h"

Triangle::Triangle() {

}

void Triangle::setSides(double a, double b, double c) {
  setA(a);
  setB(b);
  setC(c);
}

double Triangle::circumference() {
  return getA() + getB() + getC();
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

void Triangle::setA(double a) {
  this->a = a;
}

void Triangle::setB(double b) {
  this->b = b;
}

void Triangle::setC(double c) {
  this->c = c;
}
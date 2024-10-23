#include "triangle.h"
#include <cmath>

Triangle::Triangle() : a(1), b(1), c(1) { }

Triangle::Triangle(double a, double b, double c) {
  setSides(a, b, c);
}

void Triangle::setSides(double a, double b, double c) {
  if(inequality() && a > 0 && b > 0 && c > 0) {
    this->a = a;
    this->b = b;
    this->c = c;
  } else {
    this->a = 1; 
    this->b = 1; 
    this->c = 1;
  }
}

double Triangle::circumference() {
  return getA() + getB() + getC();
}

double Triangle::area() {
  double s = 0.5 * circumference();
	return sqrt(s * (s - a) * (s - b) * (s - c));
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
  if(a > 0 && inequality()) {
    this->a = a;
  }
}

void Triangle::setB(double b) {
  if(b > 0 && inequality()) {
    this->b = b;
  }
}

void Triangle::setC(double c) {
  if(c > 0 && inequality()) {
    this->c = c;
  }
}

bool Triangle::inequality() {
  return (a + b >= c) && (a + c >= b) && (b + c >= a);
}
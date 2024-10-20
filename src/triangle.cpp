#include "triangle.h"

Triangle::Triangle() : a(1), b(1), c(1) { }

void Triangle::setSides(double a, double b, double c) {
  if(inequality() && a > 0 && b > 0 && c > 0) {
    this->a = a;
    this->b = b;
    this->c = c;
  } else {
    this->a, this->b, this->c = 0;
  }
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
  if(a > 0 && inequality()) {
    this->a = a;
  } else {
    this->a = 0;
  }
}

void Triangle::setB(double b) {
  if(b > 0 && inequality()) {
    this->b = b;
  } else {
    this->b = 0;
  }
}

void Triangle::setC(double c) {
  if(c > 0 && inequality()) {
    this->c = c;
  } else {
    this->c = 0;
  }
}

bool Triangle::inequality() {
  return (a + b >= c) && (a + c >= b) && (b + c >= a);
}
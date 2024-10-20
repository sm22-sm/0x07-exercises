#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "triangle.h"

class Triangle {
  public:
    Triangle();
    Triangle(double a, double b, double c);
    void setSides(double a, double b, double c);
    double circumference();
    double area();
    double getA() const;
    double getB() const;
    double getC() const;
    void setA(double a);
    void setB(double b);
    void setC(double c);
  private:
    double a;
    double b;
    double c;
    bool inequality();
};

#endif
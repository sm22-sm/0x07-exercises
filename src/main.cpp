#include "triangle.h"
#include "test.h"

int main() {

  Triangle t1 = Triangle();
  t1.setSides(2, 3, 4);
  
  Test getters = Test("getters");
  getters.equal(2, t1.getA(), "check getA()");
  getters.equal(3, t1.getB(), "check getB()");
  getters.equal(4, t1.getC(), "check getC()");

  Test circumference = Test("circumference");
  circumference.equal(9, t1.circumference(), "check circumference()");  

  return 0;
}

#include "triangle.h"
#include "test.h"

int main() {

  Triangle t1 = Triangle();
  t1.setSides(3, 4, 5);
  
  Test getters = Test("getters");
  getters.equal(3, t1.getA(), "check getA()");
  getters.equal(4, t1.getB(), "check getB()");
  getters.equal(5, t1.getC(), "check getC()");

  Test invariants = Test("invariants");
  Triangle t_invariants = Triangle();
  t_invariants.setSides(2, 4, 6);
  t_invariants.setA(0);
  invariants.equal(0, 0, "a <= 0");
  t_invariants.setA(4);
  invariants.equal(4, t1.getA(), "a >= 0");

  Test circumference = Test("circumference");
  circumference.equal(9, t1.circumference(), "check circumference()");

  return 0;
}

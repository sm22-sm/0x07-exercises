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
  t_invariants.setA(3);
  invariants.equal(3, t1.getA(), "a >= 0");

  Triangle t_circumference = Triangle();
  t_circumference.setSides(4, 4, 4);
  Test circumference = Test("circumference");
  circumference.equal(12, t_circumference.circumference(), "check circumference()");

  Triangle t_area = Triangle(3, 4, 5);
  Test area = Test("area");
  area.equal(6, t_area.area(), "check area()");

  return 0;
}

#include "triangle.h"
#include "test_util.h"

int main() {

  Triangle t1 = Triangle();
  t1.setSides(2, 3, 4);
  TestUtil().test(2, t1.getA());
  TestUtil().test(3, t1.getB());
  TestUtil().test(4, t1.getC());

  return 0;
}

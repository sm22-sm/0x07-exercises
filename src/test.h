#include <iostream>
#include <string>

using namespace std;

class Test {
  public:
    Test(string title);
    void equal(double expected, double actual, string description = "");
  private:
    string title;
    void print(string description, string result);
};
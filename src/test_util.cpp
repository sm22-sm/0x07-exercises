#include "test_util.h"

Test::Test(string title) {
  this->title = title;
  cout << "TEST " << title << endl;
}

void Test::equal(double expected, double actual, string description) {
  if(expected == actual) {
    print(description, "PASS"); 
  } else {
    print(description, "FAIL");
  } 
}

void Test::print(string description, string result) {
  cout << " " << result << " " << description << endl;
}
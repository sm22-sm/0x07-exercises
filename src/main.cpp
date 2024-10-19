#include <iostream>
#include "atm.h"

using namespace std;

int main() {
  ATM atm = ATM();
  atm.withdraw(7);
  atm.withdraw(475);
  return 0;
}

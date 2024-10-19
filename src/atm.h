#include <vector>

using namespace std;

class ATM {
  public:
    // ATM();
    // ATM(int hundreds, int fifties, int twenties, int tens, int fives);
    ATM(int hundreds = 0, int fifties = 0, int twenties = 0, int tens = 0, int fives = 0);
    void withdraw(int amount);

  private:
    int hundreds;
    int fifties;
    int twenties;
    int tens;
    int fives;

    int calculate_denomination(int amount, int remainder, int denomination);
};
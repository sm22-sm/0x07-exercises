#include "atm.h"
#include <iostream>

using namespace std;

ATM::ATM(int hundreds, int fifties, int twenties, int tens, int fives) : hundreds(hundreds), fifties(fifties), twenties(twenties), tens(tens), fives(fives) { }

void ATM::withdraw(int amount) {
  if(amount % 5 != 0) {
    cerr << "Invalid argument. Must be divisible by 5" << endl;
    return;
  }
  int denominations[10, 50, 20, 10, 5 ];

  int remainder = amount;
  int hundreds = remainder / 100;
  remainder = remainder - hundreds * 100;
  int fifties = remainder / 50;
  remainder = remainder - fifties * 50;
  int twenties = remainder / 20;
  remainder = remainder - twenties * 20;
  int tens = remainder / 10;
  remainder = remainder - tens * 10;
  int fives = remainder / 5;
  cout << to_string(hundreds) << " " << to_string(fifties) << endl;
}

vector<int> ATM::calculate_denomination(int amount, int denomination) {
  int result = 


  
  return vector<int>();
}
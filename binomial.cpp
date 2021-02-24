#include "binomial.h"
#include "catch.hpp"


  int Binomial::GetPower(int i) {
    if (power[i] == power[1])
    return power[1];
    if (power[i] == power[2])
    return power[2];
    else
    return -1;
  }

  float Binomial::GetCoefficient(int m) {
  if (m == 1)
    return coefficient[1];

  else if (m == 2)
    return coefficient[2];
  else
    return -1;
}

  int Binomial::SetPower(int n, int d){

    if (((n == 1) || (n == 2)) && (d >= 0)){
      power[n] = d;
      return 0;
    }
    else if ((d < 0) && ((n == 1) || (n == 2))){
      power[n] = 1;
      return 0;
    }
    else if (((n != 1) || (n != 2)) && (d >= 0)){
      power[1] = power[1];
      power[2] = power[2];
      return -1;
    }
    else if (((n != 1) || (n != 2)) && (d < 0)){
      power[1] = power[1];
      power[2] = power[2];
      return -1;
    }
    else
    return -1;
  }


int Binomial::Add(const Binomial& x) {
  if (power[1] == x.power[1] && power[2] == x.power[2]) {
    this->coefficient[1] += x.coefficient[1];
    this->coefficient[2] += x.coefficient[2];
    return 0;
  } else
    return -1;
}


  void Binomial::Multiply(float x) {
    coefficient[1] = coefficient[1] * x;
    power[1] = power[1];
    coefficient[2] = coefficient[2] * x;
    power[2] = power[2];
  }
  void Binomial::Multiply(float x, int y) {
    coefficient[1] = coefficient[1] * x;
    power[1] = power[1] + y;
    coefficient[2] = coefficient[2] * x;
    power[2] = power[2] + y;
  }



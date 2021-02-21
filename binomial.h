#ifndef Binomial_h
#define Binomial_h
class Binomial {
private:
  float coef[3] {0, 1.0, 1.0};
  int pow[3] {0, 1, 1};
public:
  Binomial() {
    coef[1] = 1.0;
    coef[2] = 1.0;
    pow[1] = 1;
    pow[2] = 1;
  }

  Binomial(float x) {
    coef[1] = x;
    coef[2] = 1.0;
    pow[1] = 1;
    pow[2] = 1;
  }
  
  Binomial(float x, int y) {
    coef[2] = 1.0;
    pow[2] = 1;
    coef[1] = x;

    if (y < 1){
      pow[1] = 1;
    }
    else
    pow[1] = y;
  }

  Binomial(float x, int y, float a) {
    pow[2] = 1;
    coef[1] = x;
    coef[2] =a;

    if (y < 1){
      pow[1] = 1;
    }
    else
    pow[1] = y;
  }

  Binomial(float x, int a, float y, int b) {
  coef[1] = x;
  coef[2] =y;

  if((a < 1) && (b < 1)){
    pow[1] = 1;
    pow[2] = 1;
  }
  else if ((a < 1) && (b >= 1)){
    pow[1] = 1;
    pow[2] = b;
  }
  else if ((a >= 1) && (b < 1)){
    pow[1] = a;
    pow[2] = 1;
  }
  else{
  pow[1] = a;
  pow[2] = b;
  }
  }
  
  int GetPower(int i);

  float GetCoefficient(int m);

  int SetPower(int e, int f);

  int Add(Binomial x);

  void Multiply(float x);

  void Multiply(float x, int y);
};
#endif
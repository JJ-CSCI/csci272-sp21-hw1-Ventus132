#ifndef Binomial_h
#define Binomial_h
class Binomial {
private:
  float coefficient [3] {0, 1.0, 1.0};
  int power[3] {0, 1, 1};
public:
  Binomial() {}


  Binomial(float x) {
    coefficient [1] = x;
    coefficient [2] = 1.0;
    power[1] = 1;
    power[2] = 1;
  }
 
  
/*
  Binomial (float x) : coefficient[1] {x}, coefficient[2] {1.0}, power[1] {1}, power[2] {1} 
  {}
*/

  
  
  Binomial(float x, int y) {
    coefficient [2] = 1.0;
    power[2] = 1;
    coefficient [1] = x;

    if (y < 1){
      power[1] = 1;
    }
    else
    power[1] = y;
  }

  Binomial(float x, int y, float a) {
    power[2] = 1;
    coefficient [1] = x;
    coefficient [2] =a;

    if (y < 1){
      power[1] = 1;
    }
    else
    power[1] = y;
  }

  Binomial(float x, int a, float y, int b) {
  coefficient [1] = x;
  coefficient [2] =y;

  if((a < 1) && (b < 1)){
    power[1] = 1;
    power[2] = 1;
  }
  else if ((a < 1) && (b >= 1)){
    power[1] = 1;
    power[2] = b;
  }
  else if ((a >= 1) && (b < 1)){
    power[1] = a;
    power[2] = 1;
  }
  else{
  power[1] = a;
  power[2] = b;
  }
  }
  
  int GetPower(int i);

  float GetCoefficient (int m);

  int SetPower(int n, int d);

  int Add(Binomial x);

  void Multiply(float x);

  void Multiply(float x, int y);
};
#endif
#ifndef binomial_h
#define binomial_h

namespace N
{
class Binomial {        // The class
          // Access specifier

  
    float Coefficient1 = 1.0;  // Attribute
    float Coefficient2 = 1.0;  // Attribute
    int Power1 = 1; 
    int Power2 = 1;     // Attribute

public:
Binomial(float x, float y, int z, int q) { // Constructor with parameters
:Coefficient1 = x;
:Coefficient2 = y;


if (z < 1){
  Power1 = 1;
  }
  else{
  Power1 = z;
  }

  

  if (z < 1){
  Power2 = 1;
  }
  else{
  Power2 = q;
  }

  }
};
}
#endif


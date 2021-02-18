#include "binomial.h"
using namespace N;
//file binomial.cpp

float GetCoefficient(int x){
   if (x == 1){
    return float (Binomial::Coefficient1);
   } 
    
   else if (x == 2){
    return ::Coefficient2;
   } 
   else{
     return -1;
   }

  }


/*
int GetPower()
  {
   int Power [2] = {1 , 2};
   return power;
  }
*/
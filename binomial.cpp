#include "binomial.h"

//file binomial.cpp
/*
Binomial::Binomial(float x, float y ) // Constructor with parameters
{ 
Coefficient1 = x;
Coefficient2 = y;
Power1 = 1;
Power2 = 1;
*/

/*
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
*/

/*
Binomial::Binomial(float Coefficient1, float Coefficient2 ){

}*/


 float Binomial::GetCoefficient(int x)
   {
      if (x == 1){
        return  Coefficient1;
      } 
        
      else if (x == 2){
        return Coefficient2;
      } 
      else{
        return -1;
      }


 }

int Binomial::GetPower(float x)
  {

      if (x == 1){
        return  Power1;
      } 
        
      else if (x == 2){
        return Power2;
      } 
      else{
        return -1;
      }
}

int Binomial::SetPower (int x)
  {
      if(x != 1){
        Power1 = 1;
        Power2 = 1;
      }
      else if(x == 1){
        return 0;
      }
      else{
        return -1;
      }
    }


    int Binomial::Add (int x , int y){

    }

    int Binomial::Multiply (int num , int mono){

    }

    int Binomial::Multiply (float num , int mono){

    }



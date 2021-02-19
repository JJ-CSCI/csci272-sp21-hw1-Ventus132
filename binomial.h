



class Binomial {        // The class
          // Access specifier

  private:
    float Coefficient1 = 1.0;  // Attribute
    float Coefficient2 = 1.0;  // Attribute
    int Power1 = 1; 
    int Power2 = 1;     // Attribute

public:
//b(float x, float y, int z, int q) {
Binomial(float x, float y ){ // Constructor with parameters
 
Coefficient1 = x;
Coefficient2 = y;
Power1 = 1;
Power2 = 1;

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
}

    //}

      float GetCoefficient(int x);
      
      /*{
      if (x == 1){
        return  Coefficient1;
      } 
        
      else if (x == 2){
        return Coefficient2;
      } 
      else{
        return -1;
      }

    }*/



    int GetPower(float x);
    /*{

      if (x == 1){
        return  Power1;
      } 
        
      else if (x == 2){
        return Power2;
      } 
      else{
        return -1;
      }
    }*/

    int SetPower (int x);
    /*{
      if(x != 1){
        Power1 = 1;
        Power2 = 1;
      }
      else if{
        return 0;
      }
      else{
        return -1;
      }
    }*/

    int Add (int x , int y);

    int Multiply (int num , int mono);

    int Multiply (float num , int mono);



  };




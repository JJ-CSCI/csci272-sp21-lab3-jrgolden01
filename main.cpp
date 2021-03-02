//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {

  double co1;
  double co2;
  double co3;
  double co4;
  
public: 

Quaternion(double a, double b, double c, double d){
  co1 = a;
  co2=b;
  co3=c;
  co4=d;
};

Quaternion operator+(const Quaternion& z) const{
  Quaternion here{0,0,0,0};
  here.co1 = this->co1 +z.co1;
  here.co2 = this->co2 +z.co2;
  here.co3 = this->co3+ z.co3;
  here.co4 = this-> co4+z.co4;
  return here;
}
Quaternion operator-(const Quaternion& z)const{
  Quaternion minus{0,0,0,0};
  minus.co1 = this->co1 - z.co1;
  minus.co2 = this->co2 - z.co2;
  minus.co3 = this->co3 - z.co3;
  minus.co4 = this->co4 - z.co4;
  return minus;
}
Quaternion operator*(const double& x)const{
  Quaternion multi{0,0,0,0};
  multi.co1 = this->co1 * x;
  multi.co2 = this->co2* x;
  multi.co3 = this->co3 *x;
  multi.co4 = this->co4 *x;
  return multi;
}
bool operator== (const Quaternion& z)const{
  if (this -> co1 == z.co1){
    if (this-> co2==z.co2){
      if (this->co3==z.co3){
        if (this->co4==z.co4){
          if (this ->co4==z.co4){
            return true;
          }
          else{
            return false;
          }
        }
        else{
          return false;
        }
      }
      else{
        return false; 
      }
    }
    else{
      return false; 
    }
  }
}
};



//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------

//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
  double a, b, c, d; 
  public:Quaternion(double w, double x, double y, double z): 
  a{w}, b{x}, c{y}, d{z}{}

bool operator ==(const Quaternion &rhs)const{
    return (a=rhs.a) && (b=rhs.b)&&(c==rhs.c)&&(d=rhs.d);

  }
  Quaternion operator+(const Quaternion &rhs)const{
    Quaternion res {a+rhs.a,b+rhs.b, c+rhs.c+c, d+ rhs.d}; 
    return res;
  }
  Quaternion operator -(const Quaternion &rhs)const{
    Quaternion res{a-rhs.a, b-rhs.b,c-rhs.c,d-rhs.d};
    return res;

  }
  Quaternion operator *(const Quaternion &rhs)const{
    Quaternion res {a*rhs.a, b*rhs.b, c*rhs.c, d*rhs.d};
    return res;

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

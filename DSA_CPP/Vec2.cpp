#include    <iostream>
#include    <memory>
#include    <cmath>

using namespace std;
//WE ALREADY HAVE VEC2 CLASS IN SFML
//BUT WE ARE REWRITTING IT TO UNDERSTAND IMPLEMENTATION DETAIL AND ADD FUNCTIONALITIES

class Vec2
{
    public:
    // AS IT IS 2D VECTOR IT WILL HAVE SOME X,Y CORDINATES ON 2D PLANED
    //AS SFML LIKES TO WORK IN DECIMALS WE HAVE CREATED THEM AS DOUBLE YOU CAN ALSO  KEEP INT IT REALLY DOESN'T MATTER
    //AS WE MOSTLY NEED X,Y WE ARE NOT MAING THEM PRIVATE BCZ OF PERFORMANCE AND EASE OF USE

    double x=0;
    double y=0;

    //CONTRUCTORS DEFAULT AND PARAMETARIZED
    Vec2                   ()                                  {}
    Vec2                   (double xin,double yin)              ;

    //OPERATOR OVERLOADING
    bool    operator ==    (const Vec2& rhs)const               ;   
    bool    operator !=    (const Vec2& rhs)const               ;
    Vec2    operator +     (const Vec2& rhs)const               ;
    Vec2    operator -     (const Vec2& rhs)const               ;
    Vec2    operator *     (const Vec2& rhs)const               ;
    Vec2    operator /     (const Vec2& denominator)const       ;
    void    operator+=     (const Vec2& rhs)                    ;
    void    operator-=     (const Vec2& rhs)                    ;
    void    operator*=     (const Vec2& rhs)                    ;
    void    operator/=     (const Vec2& rhs)                    ;

    //FUNCTION FOR HELPING COLLSION AND PHYSICS SYSTEMS
    void    normalize      ()                                   ;
    double  length         ()                        const      ;
    double  distance       (const Vec2& destination)const       ;

};


Vec2::Vec2(double xin,double yin)
:x(xin),y(yin)
{}


bool Vec2::  operator ==(const Vec2& rhs)const
{
    //CHECKING BOTH COORDINATES
    return x==rhs.x&&y==rhs.y;
}

  
bool Vec2::  operator !=(const Vec2& rhs)const
{
    //CHECKING BOTH COORDINATES
    return x!=rhs.x||y!=rhs.y;
}


Vec2 Vec2:: operator +(const Vec2& rhs)const
{
    //ADDING GIVENN= VECTORS TO FORM NEW VECTOR
    return Vec2(x+rhs.x,y+rhs.y);
}

Vec2 Vec2:: operator -(const Vec2& rhs)const
{
    //RETURNING RESULTANT VECTOR AFTER SUBTRACTION
    return Vec2(x-rhs.x,y-rhs.y);
}

Vec2 Vec2:: operator *(const Vec2& rhs)const
{
    return Vec2(x*rhs.x,y*rhs.y);
}

Vec2 Vec2:: operator /(const Vec2& rhs)const
{
    //SANITY CHECKS
    if(rhs.x!=0&&rhs.y!=0)
    return Vec2(x/rhs.x,y/rhs.y);
     throw std::runtime_error("ZeroDivisonError : x or y co-ordinate of denominator's vector is 0");
}

void Vec2:: operator /=(const Vec2& rhs)
{
    //SANITY CHECKS
    if(rhs.x!=0&&rhs.y!=0)
    {
        x/=rhs.x;
        y/=rhs.y;

    }
     throw std::runtime_error("ZeroDivisonError : x or y co-ordinate of denominator's vector is 0");
}

void Vec2:: operator *=(const Vec2& rhs)
{
        x*=rhs.x;
        y*=rhs.y;
}

void Vec2:: operator +=(const Vec2& rhs)
{
        x+=rhs.x;
        y+=rhs.y;
}


void Vec2:: operator -=(const Vec2& rhs)
{
        x-=rhs.x;
        y-=rhs.y;
}



void Vec2::normalize()
{
    //NORMALIZE JUST REDUCE THE LENGTH OR VECTOR TO UNITY MAKING IT UNIT VECTTOR
    //REMEMBER IT DOES NOT CHANGE DIRECTION OF VECTOR

    double len=length();
    if(len>0){
    x/=len;
    y/=len;return;}
    throw std::runtime_error("ZeroDivisonError : length of vector is 0");

}

double Vec2::length()const
{
    //PYTHAGORAS OR EUCLIDEAN DISTANCE
    return sqrt(pow(x,2)+pow(y,2));
}

double Vec2::distance(const Vec2& destination)const
{
    //calculation distance vector
    Vec2 v(destination.x-x,destination.y-y);
    //calculating magnitude of distance vector
    return v.length();
}
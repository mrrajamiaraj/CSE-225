#include "complex.h"
#include<iostream>
using namespace std;
complex::complex(){
    real =0;
    imaginary =0;
}
complex::complex(double r, double i){
        real = r;
        imaginary = i;  
    }
complex complex::operator+(complex a){
      complex c;
      c.real = real + a.real;
      c.imaginary = imaginary + a.imaginary;
      return c;
}
complex complex::operator*(complex a){
    complex c;
     c.real = (real*a.real)-(imaginary*a.imaginary);
     c.imaginary=(real*a.imaginary)-(imaginary*a.real);
     return c;
}
bool complex::operator!=(complex a){
    bool c = false;
    if(real == a.real && imaginary == a.imaginary){
        c = true;
    }
    else return c;

}
void complex::print(){
    cout<<real<<" + "<<imaginary<<"i";
}

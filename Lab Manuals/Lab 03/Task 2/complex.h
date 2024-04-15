#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class complex{
    public :
    double real;
    double imaginary;
    complex();
    complex(double, double);
    complex operator+(complex);
    complex operator*(complex);
    bool operator!=(complex);
    void print();

};

#endif
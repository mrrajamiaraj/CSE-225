#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

class student{
    public :
    int id;
    string a;
    string name;
    double cgpa;
    student();
    student(int,string,double);
    student(int);
    bool operator+(student s);
    bool operator!=(student s);
    void info();

};

#endif
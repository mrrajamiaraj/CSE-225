#include"student.h"
#include<iostream>
using namespace std;
#include <bits/stdc++.h>
student::student(){
    id =0;
    name = NULL;
    cgpa =0;
}
student::student(int id, string name; double cgpa){
    this->id=id;
    this->name=name;
    this->cgpa=cgpa;
}
student::studet(int id){
    this->id = id;
}
bool student::operator=(student s){
    if(this->id==s.id){
        return true;
    }
    else
    return false;
}
bool student::operator!=(student s);{
    if(this->id!=s.id)
    return true;
    else
    return false;
}
void info(){
    cout<<id<<", "<<name<<", "<<cgpa<<endl;
}
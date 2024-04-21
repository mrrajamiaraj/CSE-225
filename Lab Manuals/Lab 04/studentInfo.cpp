#include "studentInfo.h"

studentInfo::studentInfo(int id, string name, double cgpa) {
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}

studentInfo::studentInfo() {

}

studentInfo::studentInfo(int id) {
    this->id = id;
}

bool studentInfo::operator==(studentInfo s) {
    if (this->id == s.id)
        return true;
    else
        return false;
}

bool studentInfo::operator!=(studentInfo s) {
    if (this->id != s.id)
        return true;
    else
        return false;
}

void studentInfo::printInfo() {

    //cout << "Id :" << id << "Name : " << name << "Cgpa : " << cgpa << endl;
    cout << id << ", " << name << ", " << cgpa << endl;

}

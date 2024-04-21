#include "unsorted.cpp"
#include "studentInfo.cpp"

#include <iostream>
using namespace std;
void print(unsorted<int> a)
{
    int value;
    int l = a.length;
    for (int i = 0; i < l; i++)
    {
        a.getnext(value);
        cout << value << " ";
    }
}
template<class t>
void check(unsorted<t> c, t value)
{
    bool b;
    c.retrive(value,b);
    if(b){
        cout<<"item is found";
    }
    else{
        cout<<"item not found";
    }
}
// void checks(unsorted<studentInfo> c, int t)
// {
//     bool b;
//     c.retrive(t,b);
//     if(b){
//         cout<<"item is found";
//     }
//     else{
//         cout<<"item not found";
//     }
// }

void full(bool b)
{
    if (b)
    {
        cout << "list is full";
    }
    else
    {
        cout << "list is not full";
    }
}

int main()
{
    unsorted<int> a;

    a.insert(5);
    a.insert(7);
    a.insert(6);
    a.insert(9);

    int l = a.length;

    cout << "list is : ";
    print(a);
    cout << endl;

    cout << "length is :" << l << endl;

    a.insert(1);
    a.resetlist();

    cout << "list is : ";
    print(a);
    cout << endl;

    check(a, 4);
    cout << endl;
    check(a, 5);
    cout << endl;
    check(a, 9);
    cout << endl;
    check(a, 10);

    cout << endl;
    full(a.isfull());

    a.delet(5);
    cout << endl;
    full(a.isfull());
    a.delet(1);
    cout << endl;
    print(a);
    cout << endl;
    full(a.isfull());
    a.delet(6);
    cout << endl;
    print(a);
    cout << endl;

    studentInfo s1(15234, "Jon", 2.6),           
    s2(13732, "Tyrion", 3.9),
            s3(13569, "Sandor", 1.2),
            s4(15467, "Ramsey2", 3.1),
            s5(16285, "Arya", 3.1);
    studentInfo s6(13596);

    unsorted<studentInfo> c;

    c.insert(s1);
    c.insert(s2);
    c.insert(s3);
    c.insert(s4);
    c.insert(s5);

    c.delet(15467);

    
    studentInfo temp;

    c.resetlist();
    
    check(c,s6);
    for(int i=0;i<c.getlength();i++){
        studentInfo temp;
       c.getnext(temp);
       temp.printInfo();

    }

}
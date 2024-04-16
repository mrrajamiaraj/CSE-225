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

void check(unsorted<int> a, int t)
{
    int c = a.retrive(t);
    if (c == 1)
    {
        cout << "item is found";
    }
    else
        cout << "item is not found";
}

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

    studentInfo s1(15234, "Jon", 2.6), // Creating objects of studentInfo class with the given information
        s2(13732, "Tyrion", 3.9),
        s3(13569, "Sandor", 1.2),
        s4(15467, "Ramsey2", 3.1),
        s5(16285, "Arya", 3.1);

    unsorted<studentInfo> students;
    students.insert(s1);
    students.insert(s2);
    students.insert(s3);
    students.insert(s4);
    students.insert(s5);

    studentInfo temp = s4; // Creating a temporary object to search for 15467
    students.delet(temp);  // Deleting the item from the list

    // Creating a temporary object to search for 13569

    // check(students, temp);                    // Retrieving the item from the list
    studentInfo r;
    if (students.retrive(r))
        cout << "Item is found " << endl;
    else
        cout << "Item is not found" << endl;
    cout << temp << endl; // Printing the item

    // Printing the list
    for (int i = 0; i < students.length; i++)
    {
        students.getnext(temp);
        cout << temp;
    }
    cout << "talsifsdjoif" << endl;
    return 0;
}
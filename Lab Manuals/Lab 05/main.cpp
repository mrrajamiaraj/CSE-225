#include "sorted.cpp"
#include <iostream>
 #include "timeStamp.cpp"

using namespace std;

int checklength(sorted<int> a)
{
    
    int i = a.lengthis();

    return i;
}

template<class t>
void list123(sorted<t> &a)
{
    t item;
    int size = a.lengthis();
    for (int i = 0; i < size; i++)
    {
        a.getnext(item);
        cout << item << " ";
    }
    cout << endl;
}

void find(sorted<int> a, int value)
{
    bool b;
    a.retrive(value, b);
    if (b)
    {
        cout << "item is found";
    }
    else
    {
        cout << "item is not found";
    }
    cout << endl;
}

void hi(sorted<int> a)
{
    bool b;
    b = a.isfull();
    if (b)
    {
        cout << "List is full";
    }
    else
    {
        cout << "List is not full";
    }
}

int main()
{
    sorted<int> a;



    a.insert(5);

    a.insert(7);

    a.insert(4);

    a.insert(2);

    a.insert(1);



    cout << checklength(a);
    cout << endl;
    list123(a);

    find(a, 6);
    find(a, 5);
    hi(a);

    a.delet(1);
    a.resetlist();
    list123(a);

    // // Second Task
    // timeStamp t1(15, 34, 23); // Creating objects of timeStamp class with the given information
    // timeStamp t2(13, 13, 02);
    // timeStamp t3(43, 45, 12);
    // timeStamp t4(25, 36, 17);
    // timeStamp t5(52, 02, 20);

    // sorted<timeStamp> timeStampList; // Creating an object of SortedType class
    // timeStampList.insert(t1);        // Inserting the objects in the list
    // timeStampList.insert(t2);
    // timeStampList.insert(t3);
    // timeStampList.insert(t4);
    // timeStampList.insert(t5);

    // timeStamp temp(25, 36, 17); // Creating a temporary object to search for the given time
    // timeStampList.delet(temp);  // Deleting the item from the list

    // // Printing the list
    // for (int i = 0; i < timeStampList.lengthis(); i++)
    // {
    //     timeStamp temp;
    //     timeStampList.getnext(temp);
    //     temp.printthem();
    // }
}

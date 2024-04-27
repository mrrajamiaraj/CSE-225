#include "sorted.cpp"
#include <iostream>
#include "timeStamp.cpp";

using namespace std;

int checklength(sorted<int> a)
{
    int i = a.lengthis();
    return i;
}

void list(sorted<int> a)
{
    int item;
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
    list(a);

    find(a, 6);
    find(a, 5);
    hi(a);

    a.delet(1);
    a.resetlist();
    list(a);

    sorted<timeStamp> tt;

    cout << "Insert 5 time values in the format ssmmhh : ";
    for (int i = 0; i < 5; i++)
    {
        int s, m, h;
        cin >> s >> m >> h;
        timeStamp ts(h, m, s);
        tt.insert(ts);
    }

    timeStamp d(25, 36, 17);
    tt.delete(d);

    for (int i = 0; i < tt.LengthIs(); i++)
    {

        TimeStamp x;
        tt.getnext(x);
        x.printthem();
    }
}

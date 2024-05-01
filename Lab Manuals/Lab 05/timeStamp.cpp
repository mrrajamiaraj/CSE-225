#include <bits/stdc++.h>
#include "timeStamp.h"
using namespace std;

timeStamp::timeStamp()
{
    this->s = 0;
    this->m = 0;
    this->h = 0;
}

timeStamp::timeStamp(int s, int m, int h)
{
    this->s = s;
    this->m = m;
    this->h = h;
}

bool timeStamp::operator==(timeStamp t)
{
    if ((s == t.s) && (m == t.m) && (h == t.h))
        return true;
    else
        return false;
}

bool timeStamp::operator!=(timeStamp t)
{
    if ((s != t.s) && (m != t.m) && (h != t.h))
        return true;
    else
        return false;
}

bool timeStamp::operator<(timeStamp t)
{
    if ((h < t.h) || ((h == t.h) && (m < t.m)) || ((h == t.h) && (m == t.m) && (s < t.s)))
        return true;
    else
        return false;
}

bool timeStamp::operator>(timeStamp t)
{
    if ((h > t.h) || ((h == t.h) && (m > t.m)) || ((h == t.h) && (m == t.m) && (s > t.s)))
        return true;
    else
        return false;
}

void timeStamp::printthem()
{
    string sec, min, hour;
    if (s > 0)
        sec = to_string(s);
    else
        sec = '0' + to_string(s);

    if (m > 0)
        min = to_string(m);
    else
        min = '0' + to_string(m);

    if (h > 0)
        hour = to_string(h);
    else
        hour = '0' + to_string(h);

    cout << sec << ":" << min << ":" << hour << endl;
}
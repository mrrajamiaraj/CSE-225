#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

#include <bits/stdc++.h>
class timeStamp
{

public:
    timeStamp();
    timeStamp(int, int, int);
    bool operator==(timeStamp);
    bool operator!=(timeStamp);
    bool operator>(timeStamp);
    bool operator<(timeStamp);
    void printthem();

private:
    int s, m, h;
};

#endif // TIMESTAMP_H_INCLUDED
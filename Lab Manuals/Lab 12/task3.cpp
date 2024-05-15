#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int i = n % 10;
        return i + sum(n / 10);
    }
}
int main()
{
    cout << sum(155);
}
#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 85, s = 30, l = 1;
    s += x;
    while(s < y)
    {
        l ++;
        s += 30;
    }
    cout << l;
}
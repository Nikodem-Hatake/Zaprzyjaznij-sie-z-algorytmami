#include <iostream>
using namespace std;
int main()
{
    long double x = 1, y = 1, z, n;
    cin >> n;
    for(int i = 2; i <= n; i ++)
    {
        z = y;
        y += x;
        x = z;
    }
    cout << y / z;
}
//Max 23600

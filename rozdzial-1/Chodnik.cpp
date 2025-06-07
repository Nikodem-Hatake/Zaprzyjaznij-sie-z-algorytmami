#include <iostream>
using namespace std;
int main()
{
    int n, s = 0, x;
    cin >> n;
    for(int i = 1; i < n; i ++)
    {
        cin >> x;
        s += x;
    }
    n = n * (n + 1) / 2;
    cout << n - s;
}
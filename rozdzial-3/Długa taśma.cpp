#include <iostream>
using namespace std;
int main()
{
    int n, min = 2147000000;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> a[i];
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    cout << min;
}
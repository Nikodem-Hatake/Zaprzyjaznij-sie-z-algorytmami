#include <iostream>
using namespace std;
int main()
{
    int n, l = 0, ll;
    cin >> n;
    int x[n], y[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> x[i] >> y[i];
    }
    for(int i = 0; i < n - 1; i ++)
    {
        if(y[i] >= x[i + 1])
        {
            ll = 2;
            int k = i + 1;
            while(y[k] >= x[k + 1] && k < n - 1)
            {
                ll ++;
                k ++;
            }
            if(ll > l)
            {
                l = ll;
            }
        }
    }
    cout << l;
}

#include <iostream>
using namespace std;
int main()
{
    int n, s, ss, l = 0, ll, p, k;
    cin >> n >> s;
    int x[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> x[i];
    }
    for(int i = 0; i < n; i ++)
    {
        ss = i;
        p = i;
        for(int j = n - 1; j > i; j --)
        {
            k = j;
            ll = 0;
            while(p != k)
            {
                ss += x[k];
                ll ++;
                k --;
            }
            if(ss == s)
            {
                if(ll > l)
                {
                    l = ll;
                }
            }
            ss = i;
        }
    }
    cout << l;
}

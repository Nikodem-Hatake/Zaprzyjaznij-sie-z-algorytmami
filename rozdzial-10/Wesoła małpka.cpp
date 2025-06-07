#include <iostream>
using namespace std;
int main()
{
    int z, n, d;
    cin >> z;
    for(int i = 0; i < z; i ++)
    {
        cin >> n >> d;
        int tab[n];
        for(int j = 0; j < n; j ++)
        {
            tab[j] = 0;
        }
        int k = 0, l = 0;
        while(tab[k] == 0)
        {
            tab[k] ++;
            k += d;
            if(k >= n)
            {
                k -= n;
            }
        }
        for(int j = 0; j < n; j ++)
        {
            if(tab[j] == 1)
            {
                l ++;
            }
        }
        cout << l << endl;
    }
}
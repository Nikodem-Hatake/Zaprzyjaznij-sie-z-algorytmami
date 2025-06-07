#include <iostream>
using namespace std;
int main()
{
    bool x = true;
    int n, m, l = 0;
    cin >> n >> m;
    int a[m], tab[m];
    for(int i = 0; i < m; i ++)
    {
        cin >> a[i];
        tab[i] = 0;
    }
    for(int i = 0; i < m; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            if(a[i] == j + 1)
            {
                tab[j] ++;
                j += n;
            }
        }
    }
    for(int i = 0; i < n; i ++)
    {
        if(tab[i] == 0)
        {
            x = false;
            i += n;
        }
        else
        {
            l += tab[i];
        }
    }
    if(x == true)
    {
        cout << l;
    }
    else
    {
        cout << -1;
    }
}
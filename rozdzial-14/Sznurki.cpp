#include <iostream>

using namespace std;

int main()
{
    int n, w, k, kk = 0, l = 0;
    cin >> n >> w;
    int tab[n];
    k = n - 1;
    for(int i = 0; i < n; i ++)
    {
        cin >> tab[i];
    }
    for(int i = 0; i < n; i ++)
    {
        int max = tab[i];
        int indeks = i;
        for(int j = i + 1; j < n; j ++)
        {
            if(tab[j] < max)
            {
                max = tab[j];
                indeks = j;
            }
        }
        tab[indeks] = tab[i];
        tab[i] = max;
    }
    while(tab[k] >= w)
    {
        l ++;
        k --;
    }
    while(k > kk)
    {
        while(tab[k] < w && k > kk)
        {
            tab[k] += tab[kk];
            kk ++;
        }
        if(tab[k] >= w)
        {
            l ++;
        }
        k --;
    }
    cout << l;
}
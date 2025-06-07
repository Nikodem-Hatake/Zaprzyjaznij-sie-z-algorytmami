#include <iostream>
using namespace std;
int main()
{
    int n, l = 0;
    cin >> n;
    int tab[n + 1];
    for(int i = 0; i <= n; i ++)
    {
        cin >> tab[i];
    }
    int k = 0;
    while(k != n)
    {
        if(tab[k] == 0)
        {
            l ++;
            while(tab[k] == 0 && k != n)
            {
                k ++;
            }
            while(tab[k] == 1 && k != n)
            {
                k ++;
            }
            while(tab[k] == 0 && k != n)
            {
                k ++;
            }
            k --;
        }
        else
        {
            k ++;
        }
    }
    cout << l;
}
#include <iostream>

using namespace std;

int main()
{
    int n, k, max = 0, tymczasowyMax;
    cin >> n >> k;
    int tab[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> tab[i];
    }
    for(int i = 0; i < n; i ++)
    {
        if(i + k < n)
        {
            tymczasowyMax = tab[i] + tab[i + k];
            if(tymczasowyMax > max)
            {
                max = tymczasowyMax;
            }
        }
    }
    cout << max;
}
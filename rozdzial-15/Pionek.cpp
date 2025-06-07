#include <iostream>

using namespace std;

int main()
{
    int n, maxSuma = 0;
    cin >> n;
    int tab[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> tab[i];
    }
    for(int i = 0; i < n; i ++)
    {
        int tymczasowaSuma = tab[i];
        int j = i;
        while(j < n)
        {
            int liczba = tab[j];
            int ilePrzesunac = 0;
            for(int k = j; k < j + 6; k ++)
            {
                if(liczba < tab[k] && k < n)
                {
                    liczba = tab[k];
                    ilePrzesunac = k - j;
                }
            }
            if(ilePrzesunac == 0)
            {
                j = n;
            }
            j += ilePrzesunac;
            tymczasowaSuma += liczba;
        }
        if(tymczasowaSuma > maxSuma)
        {
            maxSuma = tymczasowaSuma;
        }
    }
    cout << maxSuma;
}
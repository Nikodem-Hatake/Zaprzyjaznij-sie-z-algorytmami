#include <iostream>

using namespace std;

int main()
{
    bool czyPrzelane = false;
    int n, k = 0, ileLiczb = 0, jakaLiczba, ileRuchow = 0;
    cin >> n;
    int tab[n], ttab[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> tab[i];
        ttab[i] = tab[i];
    }
    for(int i = 0; i < n; i ++)
    {
        int min = ttab[i];
        int indeks = i;
        for(int j = i + 1; j < n; j ++)
        {
            if(ttab[j] < min)
            {
                min = ttab[j];
                indeks = j;
            }
        }
        ttab[indeks] = ttab[i];
        ttab[i] = min;
    }
    while(k < n)
    {
        int liczba = ttab[k];
        int kopiaIleLiczb = 1;
        k ++;
        while(liczba == ttab[k] && k < n)
        {
            kopiaIleLiczb ++;
            k ++;
        }
        if(kopiaIleLiczb > ileLiczb)
        {
            ileLiczb = kopiaIleLiczb;
            jakaLiczba = liczba;
        }
    }
    while(czyPrzelane == false)
    {
        for(int i = n - 1; i > 0; i --)
        {
            if(tab[i] > tab[i - 1] && tab[i] != jakaLiczba)
            {
                int roznica = tab[i] - tab[i - 1];
                tab[i] -= roznica;
                tab[i - 1] += roznica;
            }
            int j = 0;
            while(tab[j] == jakaLiczba && j < n)
            {
                j ++;
            }
            if(j == n)
            {
                czyPrzelane = true;
                i = 0;
            }
        }
        
        if(czyPrzelane == false)
        {
            for(int i = 0; i < n - 1; i ++)
            {
                if(tab[i] > tab[i + 1] && tab[i] != jakaLiczba)
                {
                    int roznica = tab[i] - tab[i + 1];
                    tab[i] -= roznica;
                    tab[i + 1] += roznica;
                }
                int j = 0;
                while(tab[j] == jakaLiczba && j < n)
                {
                    j ++;
                }
                if(j == n)
                {
                    czyPrzelane = true;
                    i = n;
                }
            }
        }
        for(int liczba : tab)
        {
            cout << liczba << ' ';
        }
        cout << '\n';
    }
    for(int liczba : tab)
    {
        cout << liczba << ' ';
    }
}
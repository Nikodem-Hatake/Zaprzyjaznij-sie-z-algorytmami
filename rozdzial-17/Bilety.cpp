#include <iostream>

using namespace std;

int main()
{
    int n, iloscBiletow = 0, cena = 0, minimum = INT_MAX, obecnyOdcinek = 1, indeksMinimum;
    cin >> n;
    int tab[n][2];
    for(int i = 0; i < n; i ++)
    {
        cin >> tab[i][0] >> tab[i][1];
    }
    for(int i = 0; i < tab[0][1]; i ++)
    {
        if(tab[i][0] < minimum)
        {
            minimum = tab[i][0];
        }
    }
    if(minimum == tab[0][1])
    {
        cena = tab[0][0] * tab[0][1];
        iloscBiletow = tab[0][1];
    }
    else
    {
        cena = tab[0][0];
        iloscBiletow = 1;
    }
    while(iloscBiletow <= n)
    {
        minimum = INT_MAX;
        for(int i = obecnyOdcinek; i <= iloscBiletow; i ++)
        {
            if(tab[i][0] < minimum && i < n)
            {
                minimum = tab[i][0];
                indeksMinimum = i;
            }
        }
        while(tab[indeksMinimum][1] -- && iloscBiletow <= n)
        {
            cena += tab[indeksMinimum][0];
            iloscBiletow ++;
        }
        if(tab[indeksMinimum][1] == 0)
        {
            obecnyOdcinek ++;
        }
    }
    cout << cena;
}
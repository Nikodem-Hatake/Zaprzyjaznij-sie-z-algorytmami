#include <iostream>

using namespace std;

int main()
{
    int n, iloscElementow = 1, suma = 0;
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        iloscElementow *= 2;
    }
    iloscElementow --;
    int tab[iloscElementow];
    for(int i = 0; i < iloscElementow; i ++)
    {
        cin >> tab[i];
        suma += tab[i];
    }
    for(int i = iloscElementow - 1; i >= ((iloscElementow + 1) / 2) - 1; i --)
    {
        int k = 1;
        int tymczasowaSuma = tab[i];
        int j = i - 1;
        while(k < n)
        {
            j /= 2;
            tymczasowaSuma += tab[j];
            k ++;
            j --;
        }
        if(tymczasowaSuma < suma)
        {
            suma = tymczasowaSuma;
        }
    }
    cout << suma;
}
#include <iostream>
using namespace std;
int main()
{
    bool x = false;
    int n;
    cin >> n;
    int tab[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> tab[i];
        for(int j = 0; j < i; j ++)
        {
            if(tab[i] == tab[j])
            {
                x = true;
                j += i;
                i += n;
            }
        }
    }
    if(x == false)
    {
        cout << "TAK";
    }
    else
    {
        cout << "NIE";
    }
}
#include <iostream>

using namespace std;

int main()
{
    bool p;
    int n, m, x, y, z;
    cin >> n >> m;
    bool tab[n][n];
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            tab[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i ++)
    {
        cin >> x >> y;
        tab[x - 1][y - 1] = 1;
        tab[y - 1][x - 1] = 1;
    }
    cin >> z;
    while(z --)
    {
        cin >> x >> y;
        p = false;
        if(tab[x - 1][y - 1] == 1)
        {
            p = true;
        }
        else
        {
            for(int i = 0; i < n; i ++)
            {
                if(tab[x - 1][i] == 1 && tab[i][y - 1] == 1)
                {
                    p = true;
                    i = n;
                }
            }
        }
        if(p == false)
        {
            cout << "NIE" << '\n';
        }
        else
        {
            cout << "TAK" << '\n';
        }
    }
}
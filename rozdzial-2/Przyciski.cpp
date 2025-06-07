#include <iostream>
using namespace std;
int main()
{
    int n, m, max = 0;
    cin >> n >> m;
    int p[n], x[m];
    for(int i = 0; i < n; i ++)
    {
        p[i] = 0;
    }
    for(int i = 0; i < m; i ++)
    {
        cin >> x[i];
    }
    for(int i = 0; i < m; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            if(x[i] == n + 1)
            {
                for(int k = 0; k < n; k ++)
                {
                    p[k] = max;
                }
            }
            else if(x[i] == j + 1)
            {
                p[j] ++;
                if(p[j] > max)
                {
                    max = p[j];
                }
            }
        }
    }
    for(int i = 0; i < n; i ++)
    {
        cout << p[i] << " ";
    }
}
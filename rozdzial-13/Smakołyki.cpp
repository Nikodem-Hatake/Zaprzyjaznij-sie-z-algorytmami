#include <iostream>
using namespace std;
int main()
{
    int n, m, l;
    cin >> n >> m;
    int c[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> c[i];
    }
    l = n;
    for(int i = 0; i < n; i ++)
    {
        int j = i + 1;
        while(c[j] != c[j - 1] && j < n)
        {
            l ++;
            j ++;
        }
    }
    cout << l;
}

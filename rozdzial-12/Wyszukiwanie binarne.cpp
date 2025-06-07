#include <iostream>
using namespace std;
int main()
{
    int x = 44, tab[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89}, w;
    int p = 0, k = 10, s;
    while(p <= k)
    {
        s = (p + k) / 2;
        if(tab[s] <= x)
        {
            p = s + 1;
            w = s;
        }
        else
        {
            k = s - 1;
        }
    }
    cout << tab[w];
}

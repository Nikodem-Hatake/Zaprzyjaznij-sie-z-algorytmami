#include <iostream>
using namespace std;
int main()
{
    int p, a = 1;
    cin >> p;
    int x[p / 2], j = 0, y = p;
    for(int i = 1; i < p; i ++)
    {
        if(p % i == 0)
        {
            x[j] = p / i;
            j ++;
        }
    }
    for(int i = 0; i < j - 1; i ++)
    {
        if(x[i] * x[i + 1] == 30)
        {
            if((x[i] * 2) + (x[i + 1] * 2) < y)
            {
                y = (x[i] * 2) + (x[i + 1] * 2);
            }
        }
    }
    cout << y;
}
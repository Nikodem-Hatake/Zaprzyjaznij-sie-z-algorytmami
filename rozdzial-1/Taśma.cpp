#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n], s[n], ss[n], r = 2000;
    for(int i = 0; i < n; i ++)
    {
        cin >> x[i];
        s[i] = 0;
        ss[i] = 0;
    }
    for(int i = 1; i < n; i ++)
    {
        for(int j = 0; j < i; j ++)
        {
            s[i] += x[j];
        }
        for(int j = i; j < n; j ++)
        {
            ss[i] += x[j];
        }
        if(abs(s[i] - ss[i]) < r)
        {
            r = abs(s[i] - ss[i]);
        }
    }
    cout << r;
}
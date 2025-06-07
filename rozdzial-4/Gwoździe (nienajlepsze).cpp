#include <iostream>
using namespace std;
int main()
{
	int n, k, max = 0, mmax = 0, x, y;
	cin >> n >> k;
	int w[n];
	for(int i = 0; i < n; i ++)
	{
	    cin >> w[i];
	    if(w[i] > max)
	    {
	        max = w[i];
	    }
	}
	int tab[max];
	for(int i = 0; i < max; i ++)
	{
	    tab[i] = 0;
	}
	for(int i = 0; i < max; i ++)
	{
	    for(int j = 0; j < n; j ++)
	    {
	        if(w[j] == i + 1)
	        {
	            tab[i] ++;
	        }
	    }
	}
	for(int i = 0; i < max; i ++)
	{
	    if(tab[i] > mmax)
	    {
	        mmax = tab[i];
	    }
	}
	cout << mmax + k;
}

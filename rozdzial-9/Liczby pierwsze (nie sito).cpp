#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int tab[n];
	for(int i = 1; i <= n; i ++)
	{
	    tab[i - 1] = i;
	}
	for(int i = 1; i < n; i ++)
	{
	    int l = 2;
	    int x = sqrt(tab[i]);
	    for(int j = 2; j <= x; j ++)
	    {
	        if(tab[i] % j == 0)
	        {
	            l ++;
	        }
	    }
	    if(l == 2)
	    {
	        cout << tab[i] << " ";
	    }
	}
}
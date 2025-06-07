#include <iostream>
using namespace std;
int main()
{
	int t, n, min, x, y, z;
	cin >> t;
	for(int i = 0; i < t; i ++)
	{
	    cin >> n;
	    int tab[n];
	    z = 1;
	    for(int j = 0; j < n; j ++)
	    {
	        cin >> tab[j];
	    }
	    for(int j = 0; j < n; j ++)
	    {
	        min = 1001;
	        for(int k = 0 + j; k < n; k ++)
	        {
	            if(tab[k] < min)
	            {
	                min = tab[k];
	                x = k;
	            }
	        }
	        y = tab[j];
	        tab[j] = min;
	        tab[x] = y;
	    }
	    for(int j = n - 1; j > n - 4; j --)
	    {
	        z *= tab[j];
	    }
	    cout << z << endl;
	}
}
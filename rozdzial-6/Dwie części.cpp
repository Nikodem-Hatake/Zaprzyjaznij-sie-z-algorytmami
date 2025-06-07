#include <iostream>
using namespace std;
int main()
{
	int k, px, py, max = 0, l = 0, lx, ly;
	cin >> k;
	int a[k];
	for(int i = 0; i < k; i ++)
	{
	    cin >> a[i];
	    if(a[i] > max)
	    {
	        max = a[i];
	    }
	}
	for(int i = 1; i < k; i ++)
	{
	    px = i / 2;
	    py = (k - i) / 2;
	    lx = 0;
	    ly = 0;
	    for(int j = 0; j < i; j ++)
	    {
	        if(a[j] == max)
	        {
	           lx ++; 
	        }
	    }
	    for(int j = k - 1; j >= i; j --)
	    {
	        if(a[j] == max)
	        {
	            ly ++;
	        }
	    }
	    if(lx > px && ly > py)
	    {
	        l ++;
	    }
	}
	cout << l;
}
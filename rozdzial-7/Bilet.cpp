#include <iostream>
using namespace std;
int main()
{
	int z, n, x, y;
	cin >> z;
	for(int i = 0; i < z; i ++)
	{
	    cin >> n;
	    n --;
	    int k[n];
	    y = 0;
	    for(int j = 0; j < n; j ++)
	    {
	        cin >> k[j];
	    }
	    for(int j = 0; j < n; j ++)
	    {
	        x = 0;
	        for(int l = n - 1; l >= j; l --)
	        {
	            x += k[l];
	        }
	        if(x > y)
	        {
	            y = x;
	        }
	    }
	    y *= 2;
	    cout << y << endl;
	}
}

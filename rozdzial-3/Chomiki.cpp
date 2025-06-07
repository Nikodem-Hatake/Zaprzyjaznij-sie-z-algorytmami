#include <iostream>
using namespace std;
int main()
{
	int n, m, a, b, min;
	cin >> n >> m;
	int c[n];
	for(int i = 0; i < n; i ++)
	{
	    cin >> c[i];
	}
	for(int i = 0; i < m; i ++)
	{
	    cin >> a >> b;
	    min = 5;
	    for(int j = a - 1; j < b; j ++)
	    {
	        if(c[j] < min)
	        {
	            min = c[j];
	        }
	    }
	    cout << min << endl;
	}
}
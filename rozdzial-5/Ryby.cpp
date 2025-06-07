#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n], k[n], l = n;
	for(int i = 0; i < n; i ++)
	{
	    cin >> a[i];
	}
	for(int i = 0; i < n; i ++)
	{
	    cin >> k[i];
	}
	for(int i = 0; i < n; i ++)
	{
	    if(k[i] == 1)
	    {
	        int x = i;
	        while(k[i] != 0)
	        {
	            i ++;
	        }
	        while(a[x] > a[i])
	        {
	            l --;
	            i ++;
	        }
	        if(a[x] < a[i])
	        {
	            l --;
	        }
	    }
	}
	cout << l;
}

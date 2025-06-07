#include <iostream>
using namespace std;
int main()
{
	int n, l = 0;
	cin >> n;
	int s[n];
	for(int i = 0; i < n; i ++)
	{
	    cin >> s[i];
	}
	for(int i = 0; i < n; i ++)
	{
	    if(s[i] == 0)
	    {
	        int j = i;
	        while(j < n)
	        {
	            j ++;
	            if(s[j] != 0 && j < n)
	            {
	                l ++;
	            }
	        }
	    }
	}
	cout << l;
}

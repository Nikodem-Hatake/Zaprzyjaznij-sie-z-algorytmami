#include <iostream>
using namespace std;
int main()
{
	int n, x, y = 0;
	cin >> n;
	int w[n];
	for(int i = 0; i < n; i ++)
	{
		cin >> w[i];
	}
	for(int i = 0; i < n; i ++)
	{
		for(int j = i + 1; j < n; j ++)
		{
			x = w[i];
			while(w[i] > w[j] && j < n)
			{
				j ++;
			}
			if(j == n)
			{
				x -= w[j - 1];
			}
			else
			{
				x -= w[j];
			}
			if(x > y)
			{
				y = x;
			}
		}
	}
	cout << y;
}
#include <iostream>
using namespace std;
int main()
{
	int n;
	string x;
	cin >> n;
	for(int i = 0; i < n; i ++)
	{
	    cin >> x;
	    if(x[0] == '{' && x[x.length() - 1] == '}')
	    {
	        bool y = true;
	        if(x[1] == '[' && x[x.length() - 2] == ']')
	        {
	            for(int j = 2; j < x.length() - 3; j ++)
	            {
	                if(x[j] == '(' && x[j + 1] == ')')
	                {
	                    j += 2;
	                }
	                else
	                {
	                    y = false;
	                }
	            }
	        }
	        else
	        {
	            bool y = false;
	        }
	        if(y == true)
	        {
	            cout << "TAK" << endl;
	        }
	        else
	        {
	            cout << "NIE" << endl;
	        }
	    }
	    else
	    {
	        cout << "NIE" << endl;
	    }
	}
}
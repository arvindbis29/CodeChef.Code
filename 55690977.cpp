#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b)
	    {
	        if(a>c)
	        {
	        if(b>c)
	        {
	            cout<<b<<"\n";
	        }
	        else
	        {
	            cout<<c<<"\n";
	        }
	        }
	        else
	        {
	            cout<<a<<"\n";
	        }
	    }
	    else if(a<b)
	    {
	        if(b>c)
	        {
	        if(a>c)
	        {
	            cout<<a<<"\n";
	        }
	        else
	        {
	            cout<<c<<"\n";
	        }
	        }
	        else
	        {
	            cout<<b<<"\n";
	        }
	    }
	}
	return 0;
}

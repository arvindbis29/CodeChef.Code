#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int z,y,a,b,c,d;
	    cin>>z>>y>>a>>b>>c;
	    d=a+b+c+y;
	    if(z>=d)
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	}
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    double x,y;
	    cin>>x>>y;
	    cout <<fixed<<setprecision(6);
	    if(x>1000)
	    {
	        x=x*y;
	        x=x*0.9;
	        
	        cout<<x<<"\n";
	    }
	    else
	    {
	        cout<<x*y<<"\n";
	    }
	}
	return 0;
}

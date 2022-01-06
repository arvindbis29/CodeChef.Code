#include <iostream>
using namespace std;

int main() {
	int t,x=0;
	cin>>t;
	while(x<t)
	{
	    
	    int n,temp=0;
	    cin>>n;
	   
	   while(n>0)
	    {
	         temp=temp+n%10;
	       n=n/10;
	        
	      
	    }
	    cout<<temp<<"\n";
	    x++;
	}
	return 0;
}

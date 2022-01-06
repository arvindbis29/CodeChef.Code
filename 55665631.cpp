#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i=0,t;
	cin>>t;
	while(i<t)
	{
	    int n,temp=0;
	    cin>>n;
	    while(n>0)
	    {
	     if(n%10==4)
	     {
	         temp=temp+1;
	     }
	       n=n/10;
	    }
	    cout<<temp<<"\n";
	    i++;
	}
	return 0;
}

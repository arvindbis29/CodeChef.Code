#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    int n,temp=0;
	    cin>>n;
	    while(n>0)
	    {
	        if(n>=100)
	        {
	            temp=temp+n/100;
	            n=n%100;
	        }
	        else if(n>=50)
	        {
	            temp=temp+n/50;
	            n=n%50;
	        }
	        else if(n>=10)
	        {
	            temp=temp+n/10;
	            n=n%10;
	        }
	        else if(n>=5)
	        {
	            temp=temp+n/5;
	            n=n%5;
	        }
	        else if(n>=2)
	        {
	            temp=temp+n/2;
	            n=n%2;
	        }
	        else
	        {
	            temp=temp+1;
	            n--;
	        }
	    }
	    cout<<temp<<"\n";
	    
	}
	return 0;
}

#include <iostream>
using namespace std;
int sum(int a, int b)
	{
	    int temp=b,sum1=0;
	    while(a--)
	    {
	     sum1=0;
	    for(int i=1; i<=temp;i++)
	    {
	        sum1=sum1+i;
	    }
	    temp=sum1;
	    }
	    
	     return sum1;
	    
	}

int main() {
	// your code goes here
	
	int t,d,n;
	cin>>t;
	while(t--)
	{
	    cin>>d>>n;
	    cout<<sum(d,n)<<"\n";
	}
	return 0;
}

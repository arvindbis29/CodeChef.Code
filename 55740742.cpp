#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[10];
	int r[10];
	for(int i=0; i<n; i++)
	{
	    cin>>a[i];
	}
	int i=0;
	while(i<n)
	{
	 int temp=0;
	 int x=2048;
	while(x>0)
	{
	    if(a[i]>=x)
	    {
	        temp=temp+a[i]/x;
	        a[i]=a[i]%x;
	    }
	    
	     x=x/2;
	    
	}
	  
	  
	r[i]=temp;
	i++;
	}
	
	
	for(int i=0; i<n; i++)
	{
	    cout<<r[i]<<"\n";
	}
	return 0;
}

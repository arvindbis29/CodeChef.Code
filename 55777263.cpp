#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int temp=0;
	    for(int i=2; i<n;i++)
	    {
	        if(n%i==0)
	        {
	            temp++;
	        }
	    }
	    if(n==1)
	    {
	        temp++;
	    }
	    if(temp==0)
	    {
	        cout<<"yes"<<"\n";
	    }
	    else
	    {
	        cout<<"no"<<"\n";
	    }
	}
	return 0;
}

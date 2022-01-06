#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i=0;
	cin>>n;
	int a[n];
	int temp=0;
	int n_ready=0;
	while(i<n)
	{
	    cin>>a[i];
	    i++;
	}
	i=0;
	while(i<n)
	{
	    if(a[i]%2==0)
	    {
	        temp=temp+1;
	    }
	    else{
	    n_ready=n_ready+1;}
	    i++;
	}
	if(temp>n_ready)
	{
	    cout<<"READY FOR BATTLE";
	    
	}
	else{
	cout<<"NOT READY";
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int x;
	while(n--)
	{
	    cin>>x;
	    if(x<10)
	    {
	        cout<<"Thanks for helping Chef!\n";
	    }
	    else
	    {
	        cout<<"-1\n";
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    int temp=0;
	    cin>>n>>m;
	    for(int i=0; i<n; i=i+2)
	    {
	        for(int i=0;i<m;i=i+2)
	        {
	            temp=temp+1;
	        }
	    }
	    cout<<temp<<endl;
	}
	return 0;
}

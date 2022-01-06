#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int i=0;
	while(i<t)
	{
	    int n;
	    cin>>n;
	    int temp=0;
	    while(n>0)
	    {
	        temp=temp*10+n%10;
	        n=n/10;
	    }
	    cout<<temp<<"\n";
	    i++;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t,i=0;
	cin>>t;
	while(i<t)
	{
	    int n;
	    cin>>n;
	    double temp=1;
	    for(int j=1; j<=n; j++)
	    {
	        temp=temp*j;
	    }
	    cout<<temp<<"\n";
	    i++;
	}
	return 0;
}

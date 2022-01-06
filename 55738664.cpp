#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	while(n--)
	{
	    int a,b;
	    cin>>a>>b;
	    cout<<max(a,b)<<" "<<a+b<<"\n";
	}
	return 0;
}

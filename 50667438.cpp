#include <iostream>
using namespace std;

int main() {
	// your code goes here 
	int x;
	float y;
	cin>>x;
	cin>>y;
	if(x+0.50<=y)
	{
	if(x % 5==0)
	{
	    cout<<(y-x)-0.50;
	}
	else
	{
	    cout<<float(y);
	}
	
	}
	else
	{
	    cout<<float(y);
	}
	return 0;
}

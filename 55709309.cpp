#include <iostream>
#include<string>
#include <vector>
using namespace std;


int main() {
	int n,x=0,y=0;
	cin>>n;
	int a1[n];
	int a2[n];
	int o[n]={0};
    vector<string> c;
	for(int i=0; i<n; i++)
	{
	    cin>>a1[i]>>a2[i];
	}
	for(int i=0; i<n; i++)
	{
	    x=x+a1[i];
	    y=y+a2[i];
	    if(x>y)
	    {
	        o[i]=x-y;
	        c.push_back("1");
	    }
	    else if(y>x)
	    {
	        o[i]=y-x;
	        c.push_back("2");
	    }
	}
	for(int i=0; i<n; i++)
	{
	    if(o[0]<o[i])
	    {
	        o[0]=o[i];
	        c[0]=c[i];
	    }
	}
	cout<<c[0]<<" "<<o[0];
	
	return 0;
}

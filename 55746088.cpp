#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
    
	while(n--)
	{
	    int x,r=0;
	   
	    cin>>x;
	    int y=x;
	   do
	   {
	    r=r*10+x%10;
	    x=x/10;
	   }while(x>0);
	   if(r==y)
	   {
	       cout<<"wins\n";
	   }
	   else
	   {
	       cout<<"loses\n";
	   }
	    
	}
	return 0;
}

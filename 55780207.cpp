#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float salary;
	    cin>>salary;
	    float net_worth=0;
	    cout<<fixed<<setprecision(2);
	    if(salary<1500)
	    {
	        net_worth=2*salary;
	        
	    }
	    else
	    {
	        net_worth=salary+500+0.98*salary;
	    }
	    cout<<net_worth<<"\n";
	}
	return 0;
}

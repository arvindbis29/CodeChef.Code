#include <iostream>
#include <boost/math/common_factor.hpp>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b;
	    cin>>a>>b;
	    cout<<boost::math::gcd(a,b)<<" "<<boost::math::lcm(a,b)<<"\n" ;
	}
	return 0;
}

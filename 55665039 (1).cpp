#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	cin>>T;
	int i=0;
	
	while(i<T) {
	    int a,b;
	    cin>>a>>b;
	    a=a%b;
	    cout<<a<<"\n";
	    i++;
	}

	return 0;
}
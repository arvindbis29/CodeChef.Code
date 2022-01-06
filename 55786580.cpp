#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	
	while(t--)
	{
	    cin>>n;
	    int A[n];
	    int temp=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>A[i];
	    }
	   /* temp=A[0]+A[1];
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=i+1; j<n; j++)
	        {
	            
	            if(temp>=A[i]+A[j])
	            {
	                temp=A[i]+A[j];
	            }
	        }
	    }*/
	    sort(A,A+n);
	    cout<<A[0]+A[1]<<"\n";
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    char n;
	    cin>>n;
	    if(n=='B' || n=='b')
	    {
	        cout<<"BattleShip"<<"\n";
	    }
	    else if(n=='C' || n=='c')
	    {
	        cout<<"Cruiser"<<"\n";
	    }
	    else if(n=='F' || n=='f')
	    {
	        cout<<"Frigate"<<"\n";
	    }
	    else
	    {
	        cout<<"Destroyer"<<"\n";
	    }
	    
	}
	return 0;
}

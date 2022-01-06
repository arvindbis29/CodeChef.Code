#include <iostream>
using namespace std;

int main() {
          int i=0,T;
          cin>>T;
          while(i<T)
          {
              int n,x;
              cin>>n;
              int temp=0;
              temp=n%10;
              while(n>0)
              {
                  x=n;
                  n=n/10;
                  
              }
              cout<<x+temp<<"\n";
              i++;
          }
	return 0;
}

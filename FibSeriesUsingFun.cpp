#include<iostream>
#include<math.h>
using namespace std;

int fib(int n){
    int n1=0,n2=1;
    int nextT;
    
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<n;i++){
        nextT=n1+n2;
        cout<<nextT<<" ";
        
        n1=n2;
        n2=nextT;
    }
    return 0;
}

int main ()
{
  int n;
  cin>>n;
  
  fib(n);
  return 0;
}

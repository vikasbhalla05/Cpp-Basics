#include<iostream>
#include<math.h>
using namespace std;

int fac(int n){
    
    int fac=1;
    
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    
    return fac;
}

int main ()
{
  int n;
  cin>>n;
  
  cout<<fac(n)<<endl;
  return 0;
}

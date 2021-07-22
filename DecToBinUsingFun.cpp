#include <iostream>
#include <math.h>
using namespace std;

int DtoB(int n){
    int p=1,ans=0;
    
    while(n>0){
        int rem=n%2;
        ans=rem*p+ans;
        p*=10;
        n/=2;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<DtoB(n)<<endl;
    return 0;
}

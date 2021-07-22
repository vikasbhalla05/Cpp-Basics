#include <iostream>
#include <math.h>
using namespace std;

int DtoO(int n){
    int p=1,ans=0;
    
    while(n>0){
        int rem=n%8;
        ans=rem*p+ans;
        p*=10;
        n/=8;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<DtoO(n)<<endl;
    return 0;
}

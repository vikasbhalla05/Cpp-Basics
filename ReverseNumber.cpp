#include <iostream>

using namespace std;

int main()
{
    int n,rev_num=0;
    cin>>n;
    
    while(n>0){
        int rem=n%10;
        
        rev_num=rev_num*10+rem;
        n/=10;
    }
    
    cout<<rev_num<<endl;
    return 0;
}

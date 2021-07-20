#include <iostream>

using namespace std;

int main()
{
    int n1=0,n2=1,N,n3;
    
    cout<<"enter the number if elements in Fib series:"<<endl;
    cin>>N;
    
    cout<<n1<<" ";
    cout<<n2<<" ";
    
    for(int i=2;i<N;i++){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
}

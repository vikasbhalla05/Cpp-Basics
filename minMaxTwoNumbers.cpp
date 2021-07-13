#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    
    cout<<"Enter 2 numbers:"<<endl;
    cin>>n1>>n2;
    
    if(n1<n2){
        cout<<n1<<" is min"<<endl;
        cout<<n2<<" is max"<<endl;
    }
    else{
        cout<<n1<<" is max"<<endl;
        cout<<n2<<" is min"<<endl;
    }

    return 0;
}

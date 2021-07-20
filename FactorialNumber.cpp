#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    
    int fac=1;
    
    while(n>0){
        fac=fac*n;
        n--;
    }
    
    cout<<"The Factorial is :"<<fac<<endl;
    
    return 0;
}

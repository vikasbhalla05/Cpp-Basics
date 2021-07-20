#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    
    int sum=0,org_num=n;
    
    while(n>0){
        int rem=n%10;
        
        sum=sum+rem*rem*rem;
        n/=10;
    }
    
    if(sum==org_num){
        cout<<"This number is Armstrong"<<endl;
    }
    else{
        cout<<"Not an Armstrong"<<endl;
    }
    return 0;
}

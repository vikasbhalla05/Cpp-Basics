#include <iostream>
#include <math.h>
using namespace std;

int OtoD(int x){
    int dec_n=0;
    for(int i=0;x>0;i++){
        int rem=x%10;
        dec_n=rem*pow(8,i)+dec_n;
        x/=10;
    }
    return dec_n;
}

int main()
{
    int oct_n;
    cin>>oct_n;
    
    cout<<OtoD(oct_n)<<endl;
    return 0;
    
}

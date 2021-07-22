#include <iostream>
#include <math.h>
using namespace std;

int BtoD(int x){
    int dec_n=0;
    for(int i=0;x>0;i++){
        int rem=x%10;
        dec_n=rem*pow(2,i)+dec_n;
        x/=10;
    }
    cout<<dec_n<<endl;
    return dec_n;
}

int main()
{
    int bin_n;
    cin>>bin_n;
    
    cout<<BtoD(bin_n)<<endl;
    return 0;
    
}

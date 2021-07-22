#include <iostream>
#include <math.h>
using namespace std;

int HtoD(string x){
    int dec_n=0;
    int p=1;
    
    int sl=x.size();
    
    for(int i=sl-1;i>=0;i--){
        if(x[i]>='0' && x[i]<='9'){
            dec_n+= p*(x[i]-'0');
        }
        else if(x[i]>='A' && x[i]<='F'){
            dec_n+= p*(x[i]-'A'+10);
        }
        p*=16;
    }
    return dec_n;
}

int main()
{
    string hex_n;
    cin>>hex_n;
    
    cout<<HtoD(hex_n)<<endl;
    return 0;
    
}

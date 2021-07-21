#include<iostream>
using namespace std;
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"n1="<<a<<" "<<"n2="<<b<<endl;
}

int main(){
    int n1=4,n2=5;
    
    swap(n1,n2);
    return 0;
}

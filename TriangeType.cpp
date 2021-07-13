#include <iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cout<<"Enter the sides of a triangle"<<endl;
    cin>>a>>b>>c;
    
    if(a==b && b==c){
        cout<<"It is an equilateral triangle"<<endl;
    }
    else if(a==b || b==c || c==a){
        cout<<"It is an isosceles triangle"<<endl;
    }
    else{
        cout<<"It is an scalene triangle"<<endl;
    }
    return 0;
}

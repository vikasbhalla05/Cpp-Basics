#include <iostream>
using namespace std;
int main()
{
    char a;
    int lower;
    
    cout<<"Enter a character:"<<endl;
    cin>>a;
    
    lower=(a=='a' || a=='e' || a=='i' ||a=='o' || a=='u');
    
    if(lower){
        cout<<a<<" is a vowel"<<endl;
    }
    else{
        cout<<a<<" is a consonent"<<endl;
    }

    return 0;
}

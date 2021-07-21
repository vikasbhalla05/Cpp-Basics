#include<iostream>
using namespace std;
int checkVote(int n){
    if(n>=18){
        cout<<"The Person can vote"<<endl;
    }
    else{
        cout<<"The Person can't vote"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    
    checkVote(n);
    return 0;
}

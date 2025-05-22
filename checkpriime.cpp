#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    bool isprime=true;
    for(int i=2;i<=n-1; i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    
    }
    if(isprime==true){
            cout<<"it is a prime number"<<endl;

        }
        else{
            cout<<"it is not a prime number"<<endl;
        }
    return 0;
}
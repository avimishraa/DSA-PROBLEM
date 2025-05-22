#include<iostream>
using namespace std;
int dectobinary(int decnum){
    int ans=0,pow=1;
    while(decnum>0){
        int rem=decnum%2;
        decnum/=2;

        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
    int decnum=50;
    //this for loop print the binary of 1 to 10.
    for(int i=1;i<=10;i++){
        cout<<dectobinary(i)<<endl;
    }
    return 0;
}
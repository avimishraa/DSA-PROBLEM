#include<iostream>
using namespace std;
int main(){
    int n;
    int count=1,sum=0;
    cin>>n;
    while(count<=10){
        sum=sum+count;
       
        cout<<sum<<endl;
         count++;
    }
    return 0;
}
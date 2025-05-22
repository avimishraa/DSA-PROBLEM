#include<iostream>
using namespace std;
int main(){
    int n=11;
    int oddsum=0;
    for(int i=1;i<=n;i+=2){
        oddsum+=i;
    }
    cout<<oddsum;
    cout<<endl;

    return 0;

}
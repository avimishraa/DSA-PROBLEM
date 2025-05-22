#include<iostream>
using namespace std;
int main(){
    int n=5;
    int oddsum=1;
    for(int i=1;i<=n;i++){
        oddsum*=i;
    }
    cout<<oddsum;
    cout<<endl;

    return 0;

}
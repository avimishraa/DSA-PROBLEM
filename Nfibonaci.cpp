#include<iostream>
using namespace std;
int nfibonaci(int n){
    if(n==0||n==1){
        return n;
    }
    return nfibonaci(n-1)+nfibonaci(n-2);
}
int main()
{
    cout<<nfibonaci(5);
return 0;
}
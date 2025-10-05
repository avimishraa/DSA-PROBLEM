#include<iostream>
using namespace std;
int sumofN(int n){
    if(n==0){
        return 1;
    }
    int ans=n+sumofN(n-1);
    return ans;
}
int main()
{
    cout<<sumofN(5);
return 0;
}
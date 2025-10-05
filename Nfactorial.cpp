#include<iostream>
using namespace std;
int findfactorial(int n){
    if(n==0){
        return 1;
    }
    return n*findfactorial(n-1);
}
int main()
{
   cout<<findfactorial(5);
return 0;
}

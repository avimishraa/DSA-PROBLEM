#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int ms=INT_MIN;
    int n=8;
    int arr[8]={1,4358,-6676,8-6,9,6,-598};
    for(int st=0;st<n;st++){
        int csum = 0;
        for(int end=st;end<n;end++){
            // for(int i=st;i<=end;i++){
            //     cout<<arr[i];
            // }
            csum+=arr[end];
            ms = max(ms,csum);
        }
        
    }
    cout<<ms;
    return 0; 
}
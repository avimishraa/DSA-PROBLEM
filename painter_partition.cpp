#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool isPossible(vector<int> &arr , int n ,int m,int maxAllowedTime){
    int painters=1,time=0;
    for(int i=0;i<n;i++){
        if(time+arr[i]<=maxAllowedTime){
            time+=arr[i];
        }
        else{
            painters++;
            time=arr[i];
        }
        
    }
    return painters<=m;
}
int minTimeToPaint(vector<int> &arr,int n,int m){
    int sum=0, maxval=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxval=max(maxval,arr[i]);
    }
    int st=maxval,end=sum,ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr={24,34,23,35};
    int n=4,m=2;
    cout<<minTimeToPaint(arr,n,m);
return 0;
}
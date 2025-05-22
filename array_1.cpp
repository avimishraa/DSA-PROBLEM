#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int nums[]={5,12,22,1,-15,24};
    int size=6;
    int smallest = INT_MAX;
    int index=0;

    /*find the smallest number index problem is also solved in this code
    */
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            index=i;
            // we can use nested if else like below i use if we want otherwise without -- 
            // it ,  is also we can do simply store the vale of i in index
            // if(nums[i]==smallest){
            //     index=i;
            // }
        }
    }
    cout<<"smallest ="<<smallest<<endl;
    cout<<"smallest index = "<<index<<endl;
return 0;
}
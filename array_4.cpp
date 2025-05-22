#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={1,2,3};
    cout<<vec[0]<<endl;
    vec.pop_back();
    vec.push_back(4);
    for(int val:vec){
        cout<<val<<endl;
        
        
    }

return 0;
}
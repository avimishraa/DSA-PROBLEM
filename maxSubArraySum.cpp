#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int ms = INT_MIN;
    int n = 5;
    int cs = 0;
    int arr[5] = {1, -2, 3, 4, 5};
    for (int i = 0; i < n; i++)
    {
        
        cs += arr[i];
        ms = max(ms, cs);
        if (cs < 0)
        {
            cs = 0;
        }
    }
cout << ms;
return 0;
}
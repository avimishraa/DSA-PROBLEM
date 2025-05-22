#include <iostream>
using namespace std;
void reversearray(int arr[], int sz)
{
    int start = 0, end = sz - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {3, 4, 5, 77, 8};
    int sz = 5;
    reversearray(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
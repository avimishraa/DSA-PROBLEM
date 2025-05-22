#include <iostream>
#include <algorithm>  // for std::swap
using namespace std;

int main() {
    string str = "Atul";
    
    for(int i = 1; i < 4; i++) {
        swap(str[i], str[i-1]);
        cout << str << endl;
    }

    // cout << str << endl;  // To display the modified string
    
    return 0;
}

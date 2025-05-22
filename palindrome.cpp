#include<iostream>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int left=0;
  int right=str.size()-1;
  bool isPalindrome = true;

  while (left < right) {
      if (tolower(str[left]) != tolower(str[right])) {
          isPalindrome = false;
          break;
      }
      left++;
      right--;
  }

  if (isPalindrome)
      cout << "Palindrome" << endl;
  else
      cout << "Not a palindrome" << endl;

  return 0;
}

// check palindrome

#include <iostream>
using namespace std;

bool checkpalindrome(string s, int i){
  if(i >= s.size()/2){
    return true;
  }
  if(s[i] != s[s.size()-i-1]){
    return false;
  }
  return checkpalindrome(s, i+1);
}

int main() 
{
    string s = "madam";
    cout << checkpalindrome(s, 0);
    return 0;
}
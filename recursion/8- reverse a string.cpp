// with two pointer

// #include <iostream>
// using namespace std;

// void reverse(string& str, int i, int j){
//   if(i>j){
//     return;
//   }
//   swap(str[i], str[j]);
//   i++;
//   j--;
//   reverse(str, i, j);
// }

// int main() 
// {
//     string name = "khushi";
//     reverse(name, 0, name.length()-1);
//     cout<<name<<endl;
//     return 0;
// }

// with single pointer

#include <iostream>
using namespace std;

void reverse(string& str, int i, int j){
  if(i>=j/2){
    return;
  }
  swap(str[i], str[j-i-1]);
  reverse(str, i+1, j);
}

int main() 
{
    string name = "abcd";
    reverse(name, 0, name.length());
    cout<<name<<endl;
    return 0;
}
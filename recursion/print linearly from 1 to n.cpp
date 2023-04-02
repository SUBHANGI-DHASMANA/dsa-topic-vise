// print linearly from 1 to n
#include <iostream>
using namespace std;

void f(int n){
  int s = n;
  if(n == 0){
    return;
  }
  f(n-1);
  cout << n << endl;
}

int main() 
{
    f(6);
    return 0;
}
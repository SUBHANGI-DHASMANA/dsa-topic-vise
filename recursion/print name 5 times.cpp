// print name 5 times
#include <iostream>
using namespace std;

void f(int n){
  if(n<=0){
    return;
  }
  cout << "Hello" << endl;
  f(n-1);
}

int main() 
{
    f(5);
    return 0;
}
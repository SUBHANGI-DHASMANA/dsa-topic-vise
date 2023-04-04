// Sum of fisrt n digits

#include <iostream>
using namespace std;

int parameter(int i, int sum){
  if(i<1){
    cout << sum << endl;
    return 0;
  }
  parameter(i-1, sum + i);
}

int functional(int n){
  if(n < 1){
    return 0;
  }
  return n + functional(n-1);
}

int main() 
{
    cout << functional(3) << endl;
    parameter(3, 0);
    return 0;
}
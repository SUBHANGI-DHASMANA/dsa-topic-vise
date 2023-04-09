#include <iostream>
#include <vector>
using namespace std;

void f(int ind, vector<int> &ds, int arr[], int n){
  if(ind==n){
    for(auto it : ds){
      cout << it << " ";
    }
    if(ds.size() == 0){
      cout << "{}";
    }
    cout << endl;
    return;
  }
  f(ind+1, ds, arr, n);
  ds.push_back(arr[ind]);
  f(ind+1, ds, arr, n);
  ds.pop_back();
}

int main() 
{
  int arr[] = {3, 1, 2};
  int n = 3;
  vector<int> ds;
  f(0, ds, arr, n);
  return 0;
}
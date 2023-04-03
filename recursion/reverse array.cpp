// reverse array

#include <iostream>
using namespace std;

// void reverse(int arr[], int size){
//   int s=0, e=size-1;
//   for(int i = 0; i<size; i++){
//     if(s<e){
//       swap(arr[s], arr[e]);
//       s++;
//       e--;
//     }
//   }
// }

void reverse(int arr[],int i, int n){
  if(i>= n/2){
    return;
  }
  swap(arr[i], arr[n-i-1]);
  reverse(arr, i+1, n);
}

void print(int arr[], int size){
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}

int main() 
{
    int arr[] = {1, 5, 3, 2, 1};
    // reverse(arr, 5);
    reverse(arr, 0, 5);
    print(arr, 5);
    return 0;
}
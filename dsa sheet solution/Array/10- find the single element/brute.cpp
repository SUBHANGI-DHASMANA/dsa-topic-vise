#include <iostream>
using namespace std;

int getSingleElement(int arr[]) {
  int cnt = 0;
  for (int i = 0; i < arr.size(); i++) {
    int num = arr[i];
    for (int j = 0; j < arr.size(); j++) {
      if (arr[j] == num) {
        cnt++;
      }
    }
	if(cnt == 1) return num;
  }
}

int main() 
{
    int arr[] = {1,1,2,2,3};
    cout << getSingleElement(arr) << endl;
    return 0;
}
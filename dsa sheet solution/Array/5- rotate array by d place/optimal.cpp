#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d){
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

int main() {
    int n = 7;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftRotate(arr, n, d);
    // cout << "After rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    // cout << endl;

    return 0;
}
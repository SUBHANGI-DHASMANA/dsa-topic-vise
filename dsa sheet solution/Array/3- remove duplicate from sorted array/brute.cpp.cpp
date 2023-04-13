#include <iostream>
#include <set>
using namespace std;

int main() 
{
    set<int> st;
    int arr[] = {1,1,2,2,2,3,3};
    for(int i=0; i<7; i++){
      st.insert(arr[i]);
    }
    for (auto& str : st) {
        cout << str << ' ';
    }
    return 0;
}
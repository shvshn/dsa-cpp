#include <bits/stdc++.h>
using namespace std;

void reverseOut(int arr[], int n) {
    for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void reverseArray(int arr[], int left, int right) {
  if(left > right) return;
  else {
    swap(arr[left], arr[right]);
    reverseArray(arr, left+1, right-1);
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  reverseArray(arr, 0, n-1);
  reverseOut(arr, n);
  return 0;
}

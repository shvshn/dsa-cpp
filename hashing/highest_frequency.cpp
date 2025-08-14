#include <bits/stdc++.h>
using namespace std;

void highestFrequency(vector<int> arr, int n) {
  map<int, int> mpp;
  for(int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  int maxFreq = 0;
  int maxEle = 0;

  for( auto it : mpp) {
    int count = it.second;
    int element = it.first;

    if(count > maxFreq) {
      maxFreq = count;
      maxEle = element;
    }
  }

  cout << maxEle;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  highestFrequency(arr, n);
}

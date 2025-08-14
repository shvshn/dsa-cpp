#include <bits/stdc++.h>
using namespace std;

//see how to use map and unordered how to iterate and how to work with map

unordered_map<int, int> frequency(int num[], int n) {
  unordered_map<int, int> mpp;
  for(int i = 0; i < n; i++) {
    mpp[num[i]]++;
  }
  return mpp;
}

int main() {
  int n;
  cin >> n;
  int num[n];
  for(int i = 0; i < n; i++) {
    cin >> num[i];
  }
  unordered_map<int, int> freqMap = frequency(num, n);
  for( auto it : freqMap) {
    cout << it.first <<"->" << it.second << endl;
  }
  return 0;
}


//this below code uses array and hash but the limitation is that arrays have a limit to store the value like 10^7 for global, so we need to use map

// int hashh[10000000] = {0};

// int frequency(int nums [], int size, int number) {

//   for(int i = 0; i < size; i++) {
//     hashh[nums[i]]++;
//   }
//   return hashh[number];
// }

// int main() {
//   int n;
//   cin >> n;
//   int nums[n];
//   for(int i = 0; i < n; i++) {
//     cin >> nums[i];
//   }
//   int number;
//   cin >> number;
//   cout << frequency(nums, n, number);
//   return 0;
// }

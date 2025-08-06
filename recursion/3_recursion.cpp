#include <bits/stdc++.h>
using namespace std;


void numReverse(int i, int n) {
  if(i < 1) return;
  else {
    cout << i << " ";
    numReverse(i-1, n);
  }
}

int main() {
  int n;
  cin >> n;
  numReverse(n, n);
  return 0;
}

// int num;

// void numReverse() {
//   if(num == 0) return;
//   else {
//     cout << num << endl;
//     num--;
//     numReverse();
//   }
// }

// int main() {
//   cin >> num;
//   numReverse();
//   return 0;
// }

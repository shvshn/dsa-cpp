// backtrack for N to 1

#include <bits/stdc++.h>
using namespace std;

void backTrackNum(int i, int n) {
  if(i > n) return;
  else {
    backTrackNum(i + 1, n);
    cout << i << " ";
  }
}

int main() {
  int n;
  cin >> n;
  backTrackNum(1, n);
  return 0;
}

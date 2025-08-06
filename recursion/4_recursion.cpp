// use backtrack, print from 1 to N without calling (i+1,n)


#include <bits/stdc++.h>
using namespace std;

void backTrackNum(int i, int n) {
  if(i < 16
  ) return;
  else {
    backTrackNum(i - 1, n);
    cout << i << " ";
  }
}

int main() {
  int n;
  cin >> n;
  backTrackNum(n, n);
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int nSum(int n) {
  if (n < 0) return 0;
  else {
    return n + nSum(n - 1);
  }
}

int main() {
  int n;
  cin >> n;
  int sum = nSum(n);
  cout << sum;
  return 0;
}

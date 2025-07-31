#include <bits/stdc++.h>
using namespace std;

void countdigits() {
  int n;
  cin >> n;
  int count = 0;
  while(n > 0) {
    n = n/10;
    count++;
  }
  cout << "total number of digits in n are " << count;
}

int main() {
  countdigits();
  return 0;
}

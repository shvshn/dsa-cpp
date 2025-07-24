#include <bits/stdc++.h>
using namespace std;

void armstrongNum() {
  int n;
  cin >> n;
  int n1 = 0;
  int temp = n;
  int digits = 0;

  while(temp > 0) {
    digits++;
    temp = temp/10;
  }

  temp = n;

  while(temp > 0) {
    int lastDigit = temp % 10;
    n1 = n1 + pow(lastDigit, digits);
    temp = temp/10;
  }

  if(n == n1) {
    cout << n << " is an armstrong number";
  } else cout << n << " is not an armstrong number";
}

int main() {
  armstrongNum();
  return 0;
}

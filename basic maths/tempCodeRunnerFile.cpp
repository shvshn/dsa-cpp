#include <bits/stdc++.h>
using namespace std;

void armstrongNum() {
  int n;
  cin >> n;
  int n1 = 0;
  int temp = n;
  while(temp > 0) {
    int lastDigit = temp % 10;
    n1 = n1 + lastDigit*lastDigit*lastDigit;
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

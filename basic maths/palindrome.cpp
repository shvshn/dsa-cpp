#include <bits/stdc++.h>
using namespace std;

void checkPalindrome() {
  int n;
  cin >> n;
  int reverseNum = 0;
  int temp = n;
  while(temp > 0) {
    int lastDigit = temp % 10;
    reverseNum = reverseNum*10+lastDigit;
    temp = temp/10;
  }
  if(n == reverseNum) {
    cout << n << " is a palindrome";
  } else cout << n << " no is not a palindrome";
}

int main() {
  checkPalindrome();
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  for(int i = 0; i < n; i++) {
    char ch = 'A';

    for(int j = 0; j < n-i-1; j++) {
      cout << " ";
    }
    for(int j = 0; j < 2*i+1; j++) {
      cout << ch;
      if (j < i) {
        ch++;
      } else {
        ch--;
      }
    }
    for(int j = 0; j < n-i-1; j++) {
      cout << " ";
    }
    cout << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 5;
  for(int i = 0; i < n; i++) {
    char ch = 'E'-i;
    for(int j = 0; j <= i; j++) {
      cout << ch;
      ch++;
    }
    cout << endl;
  }
  return 0;
}


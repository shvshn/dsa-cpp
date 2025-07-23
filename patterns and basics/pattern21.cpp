#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 3;
  for(int i = 1; i <= 2*n+1; i++) {
    if(i%2==0) {
      for(int j = 0; j < n+1-i; j++) {
        cout << "*";
      } else cout << endl;
    }
  }cout << endl;
  return 0;
}


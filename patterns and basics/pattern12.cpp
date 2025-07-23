#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  for(int i = 1; i < n+1; i++) {
    for(int j = 1; j <= i; j++){
      cout << j;
    }
    for(int j = 0; j < 2*n-2*i; j++) {
      cout << " ";
    }
    for(int j = 0; j < i; j++){
      cout << i-j;
    }
    cout << endl;
  }
  return 0;
}

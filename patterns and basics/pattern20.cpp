#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 5;
  for(int i = 0; i < 2*n-1; i++) {
    int stars = i+1;
    int spaces = 2*n-2*i-2;
    if ( i >= n) {
     stars = 2*n-i-1;
     spaces = 2*(i-n+1);
    }
    for(int j = 0; j < stars; j++) {
      cout << "*";
    }
    for(int j = 0; j < spaces; j++) {
      cout << " ";
    }
    for(int j = 0; j < stars; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}

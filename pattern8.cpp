#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 5;
  for(int i = 1; i <=5; i++) {

    for(int j = 0; j <n-i; j++){
      cout << " ";
    }

    for(int j = 0; j < 2*i-1; j++) {
      cout << "*";
    }

    for(int j = 0; j <n-i; j++){
      cout << " ";
    }
    cout << endl;
  }
  return 0;
}

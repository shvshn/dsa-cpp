#include <bits/stdc++.h>
using namespace std;

int main(){
  int n = 5;
  for(int i = 0; i < n; i++) {
    bool flag = (i % 2 == 0);
    for(int j = 0; j <= i; j++){
      if (flag) {
        cout << "1";
      } else {
        cout << "0";
      }
      flag = !flag; 
    }
    cout << endl;
  }
  return 0;
}

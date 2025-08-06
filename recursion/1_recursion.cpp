#include <bits/stdc++.h>
using namespace std;

// using parameters and not global variables

string name;

void repeat(int i, int n) {
  if(i > n) return;
  else {
    cout << name << endl;
    repeat(i+1, n);
  }
}

int main() {
  cin >> name;
  int n;
  int i = 1;
  cin >> n;
  repeat(i, n);
  return 0;
}




// int cnt = 0;
// string name;

// void repeat() {
//   if(cnt == 5) {
//     return;
//   } else {
//     cout << name << endl;
//     cnt++;
//     repeat();
//   }
// }

// int main() {
//   cin >> name;
//   repeat();
//   return 0;
// }

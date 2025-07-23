#include <bits/stdc++.h>
using namespace std;


// my solution using the last logic
// int main() {
//   int n = 4;
//   for(int i = 0; i < 2*n-1; i++) {
//     for(int j = 0; j < 2*n-1; j++) {
//       if(i == 0 || j == 0 || i == 2*n-2 || j == 2*n-2) {
//         cout << "4";
//       }
//       else if(i == 1 || i == 2*n-3 || j == 1 || j == 2*n-3){
//         cout << "3";
//       }
//       else if(i == 2 || i == 2*n-4 || j == 2 || j == 2*n-4){
//         cout << "2";
//       }
//       else cout << "1";
//     }
//     cout << endl;
//   }
//   return 0;
// }

int main() {
  int n = 4;
  for(int i = 0; i < 2*n-1; i++) {
    for(int j = 0; j < 2*n-1; j++) {
      int top = i;
      int left = j;
      int down = (2*n-1)-1-i; // total minus i
      int right = (2*n-1)-1-j; // total minus j
      cout << (n - min(min(top,down), min(left, right)));
    }
    cout << endl;
  }
  return 0;
}

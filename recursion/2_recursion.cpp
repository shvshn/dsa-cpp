#include <bits/stdc++.h>
using namespace std;

void printNum(int i, int num) {
  if(i>num) return;
  else {
    cout << i << " ";
    printNum(i+1, num);
  }
}

int main() {
  int num;
  cin >> num;
  printNum(1, num);
  return 0;
}

// int num = 1;
// int n;

// void numPrint() {
//   if (num > n) return;
//   else {
//     cout << num << endl;
//     num++;
//     numPrint();
//   }
// }

// int main() {
//   cin >> n;
//   numPrint();
// }

#include <bits/stdc++.h>
using namespace std;

int fabonacci(int n) {
  if(n <= 1) return n;
  int last = fabonacci(n-2);
  int sLast = fabonacci(n-1);
  return last+sLast;
}

int main() {
  int n;
  cin >> n;
  cout << fabonacci(n);

}

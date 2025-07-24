#include <bits/stdc++.h>
using namespace std;

// optimal solution, altho i used vectors and then size of vector but you don't need the values of the factors so no need to store in vector just increase the count, ig vector will be used in gcd

void checkPrime() {
  int n;
  cin >> n;
  int count = 0;
  for(int i = 1; i <= sqrt(n); ++i) {
    if((n%i==0)) {
      count++;
      if((n/i) != i) count++;
    }
  }
  if(count == 2) {
    cout << n << " is prime";
  }else cout << n << " is not prime";
}

int main() {
  checkPrime();
  return 0;
}

// void checkPrime() {
//   int n;
//   cin >> n;
//   vector<int> ls;
//   for(int i = 1; i <= sqrt(n); i++) {
//     if(n % i == 0) {
//       ls.push_back(i);
//       if((n/i) != i) {
//         ls.push_back((n/i));
//       }
//     }
//   }
//   if(ls.size() == 2) {
//     cout << n << " is prime";
//   } else cout << n << " is not prime";
// }

// int main() {
//   checkPrime();
//   return 0;
// }

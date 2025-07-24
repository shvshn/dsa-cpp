#include <bits/stdc++.h>
using namespace std;

// i used vectors, 2 vectors of consisting the factors, made i new vec of common facs and sorted to find gcd. wasn't needed, could have just used for loop and if( || ), but the optimal solution is using euclidean algo

void gcd() {
  int n;
  int m;
  cin >> n >> m;
  while(n > 0 && m > 0) {
     if(n > m) {
      n = n%m;
     } else {
      m = m%n;
     }
     if(n == 0) {
      cout << "gcd is " << m;
     }
     if(m == 0) {
      cout << "gcd is " << n;
     }
  }
}

int main() {
  gcd();
  return 0;
}

// void gcd() {
//   int n;
//   int m;
//   cin >> n >> m;
//   vector<int> f1;
//   vector<int> f2;
//   vector<int> f3;
//   for(int i = 1; i <= sqrt(n); i++) {
//     if(n%i==0) {
//       f1.push_back(i);
//       if((n/i) != i) {
//         f1.push_back((n/i));
//       }
//     }
//   }
//   for(int i = 1; i <= sqrt(n); i++) {
//     if(m%i==0) {
//       f2.push_back(i);
//       if((m/i) != i) {
//         f2.push_back((m/i));
//       }
//     }
//   }
//   for(auto i : f1){
//     for(auto j : f2) {
//       if(i == j) {
//         f3.push_back(i);
//       }
//     }
//   }
//   sort(f3.begin(), f3.end());
//   cout << f3.back();
// }

// int main() {
//   gcd();
//   return 0;
// }

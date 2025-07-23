#include<bits/stdc++.h>
using namespace std;

void sum(int a, int b) {
  cout << "sum is " << a+b;
}

int main() {
  // int arr[5];
  // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

  // arr[3] += 10;2
  // cout << "output" << arr[3];

  // 2D array

  // int arr[2][3];
  // arr[1][2] = 38;
  // cout << arr[2][2];


  // string also stores same as index
  // string s = "shiv";
  // int len = s.length();
  // cout << len;
  // s[3] = 'b';
  // cout << s[3];

  //while loop

  // int i=0;
  // while(i<=5) {
  //   cout << "ishiv" << endl;
  //   i++;
  // }


  // do while lets you print atleast once no matter what the condition is
  // int i = 0;
  // do{
  //   cout << "ishiv";
  //   i++;
  // }while(i<1);


  // return 0;
  int num1, num2;
  cin >> num1 >> num2;
  sum(num1, num2);

  //pass by value, when is uses a copy not the original (normal way of passing)

  // pass by reference, when is uses the original. & is used before passing to pass it this way

  //arrays are always passed by reference
  
}



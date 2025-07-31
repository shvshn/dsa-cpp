#include <bits/stdc++.h>
using namespace std;

void reverseDigits() {
    int n;
    cin >> n;
    long reverseNum = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reverseNum = reverseNum * 10 + lastDigit;
        n = n / 10;
    }
    cout << reverseNum;
}

int main() {
    reverseDigits();
    return 0;
}


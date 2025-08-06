#include <bits/stdc++.h>
using namespace std;

//leetcode problem 125, works with " " or strings with :,; skipping these and only considering alpha numerics characters in the string.

 bool helper(string &s, int left, int right) {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        if (left >= right) return true;

        if (tolower(s[left]) == tolower(s[right]))
            return helper(s, left + 1, right - 1);
        else
            return false;
    }

    bool isPalindrome(string s) {
        return helper(s, 0, s.size() - 1);
    }

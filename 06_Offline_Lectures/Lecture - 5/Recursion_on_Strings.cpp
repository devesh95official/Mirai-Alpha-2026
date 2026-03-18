#include <bits/stdc++.h>

using namespace std;

void printString(string s, int i) { 
    if(i == s.length()) return;

    cout << s[i] << " ";
    printString(s, i+1);

}

void reversePrint(string s, int i) { 
    if(i == s.length()) return;

    reversePrint(s, i+1);
    cout << s[i];

}

bool palindrome(string s, int l, int r) { 
    if(l >= r) return true;

    if(s[l] != s[r])
        return false;

    return palindrome(s, l+1, r-1);

}


int countChar(string s, int i, char key) { 
    if(i == s.length()) return 0;

    if(s[i] == key)return 1 + countChar(s, i+1, key);

    return countChar(s, i+1, key);

}
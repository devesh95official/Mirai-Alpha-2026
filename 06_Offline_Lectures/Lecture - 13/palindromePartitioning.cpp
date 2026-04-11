// palindrome partitioning
#include <bits/stdc++.h>

using namespace std;

// function to check if a string is palindrome
bool isPalindrome(string&s) {
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1])return false;
    }
    return true;
}

void partition(int idx, vector<string>&path, string&s) {
    // base case
    if (idx == s.size()) {
        // print the partition which is stored in path
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
        cout << endl;
        // return to end the recursive loop
        return;
    }

    for (int i = idx; i < s.size(); i++) {
        string temp = "";
        for (int j = idx; j <= i; j++) temp.push_back(s[j]);
        if (isPalindrome(temp) == true) {// checking if palindrome
            // take
            path.push_back(temp);
            // explore
            partition(i + 1, path, s);
            // untake
            path.pop_back();
        }
    }
}

int main() {
    // input
    string s;
    cin >> s;
    // store palindrome strings
    vector<string> path;
    // calling function to print palindrome partitions
    partition(0, path, s);
    return 0;
}
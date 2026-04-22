#include <bits/stdc++.h>

using namespace std;

// merge sorted arrays

int main() {
    // input
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m), arr3;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    // two pointers
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j])arr3.push_back(arr1[i]), i++;
        else arr3.push_back(arr2[j]), j++;
    }
    // rest elements
    while (i < n)arr3.push_back(arr1[i]), i++;
    while (j < m)arr3.push_back(arr2[j]), j++;
    // print the sorted array
    for (int i = 0; i < arr3.size(); i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
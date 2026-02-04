// next permutation

#include <bits/stdc++.h>

using namespace std;


void nextPermutation(vector<int>& a) {
    int n = a.size();
    int i = n - 2;

    while (i >= 0 && a[i] >= a[i + 1]) i--;

    if (i >= 0) {
        int j = n - 1;
        while (a[j] <= a[i]) j--;
        swap(a[i], a[j]);
    }

    reverse(a.begin() + i + 1, a.end());
    // reverse(arr +  i + 1,arr + n);
}

int main() {

    //vector<int> v = { 1, 2, 3, 5, 4 };
    int arr[] = {1, 2, 3, 5, 4};
    //nextPermutation(v);
    //next_permutation(v.begin(), v.end());
    next_permutation(arr, arr + 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
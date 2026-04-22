#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> &v, int low, int high) {
    int pivot = v[high]; // starting pivot element
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (v[j] < pivot) {
            i++;
            swap(v[j], v[i]);
        }
    }
    swap(v[high], v[i + 1]);
    return i + 1;
}
// recursive funtion to sort the array left and right
void quickSort(vector<int> &v, int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);

        quickSort(v, low, pi - 1);
        quickSort(v, pi + 1, high);
    }
}

int main() {
    // input
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // apply quick sort 
    quickSort(v, 0, n - 1);
    // print the array
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
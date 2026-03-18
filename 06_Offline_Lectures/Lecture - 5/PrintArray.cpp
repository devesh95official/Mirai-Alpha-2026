#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n, int i) { 
    if(i == n) return;

    cout << arr[i] << " ";
    printArray(arr, n, i+1);

}

void printReverse(int arr[], int n, int i) { 
    if(i == n) return;

    printReverse(arr, n, i+1);
    cout << arr[i] << " ";

}

int main(){ 
    return 0;
}
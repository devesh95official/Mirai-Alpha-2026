bool search(int arr[], int n, int key) { 
    if(n == 0) return false;

    if(arr[n-1] == key)
        return true;

    return search(arr, n-1, key);

}

void findIndex(int arr[], int n, int i, int key) { 
    if(i == n) return;

    if(arr[i] == key)
        cout << i << " ";

    findIndex(arr, n, i+1, key);

}
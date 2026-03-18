int findMax(int arr[], int n) { 
    if(n == 1) return arr[0];

    return max(arr[n-1], findMax(arr, n-1));

}
int arraySum(int arr[], int n) { 
    if(n == 0) return 0;

    return arr[n-1] + arraySum(arr, n-1);

}
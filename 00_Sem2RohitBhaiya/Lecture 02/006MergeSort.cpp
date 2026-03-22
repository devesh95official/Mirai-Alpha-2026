#include<iostream>
using namespace std;
void merge(int *arr, int s, int m, int e){
    //merge two sorted array i.e [s...m] and [m+1...e]
    int i = s;
    int j = m+1;
    int k = s;

    int brr[101];
    while (i<=m && j<=e)
    {
        if (arr[i]<arr[j])
        {
            brr[k] = arr[i];
            i++;
            k++;
        }else{
            brr[k] = arr[j];
            j++;
            k++;
        }
        
    }
    while (i<=m)
    {
        brr[k] = arr[i];
        i++;
        k++;
    }
    while (j<=e)
    {
        brr[k] = arr[j];
        j++;
        k++;
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = brr[i];
    }
}

void mergesort(int* arr, int s, int e){
    //base case...
    if(s>=e){
        return;
    }
    //recursive case...

    //1. compute the middle part of the array...
    int m = s+(e-s)/2;
    //2.sort the sub-array which start arr[s, m]...
     mergesort(arr, s, m);
    //3.sort the sub-array which start arr[m+1, e]...
    mergesort(arr, m+1, e);
    //merge the resultant sorted array..
    merge(arr, s, m, e);
}
int main(){
    int arr[] = {50,40,30,20,10};
    int n = sizeof(arr)/sizeof(int);
    mergesort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;her
}
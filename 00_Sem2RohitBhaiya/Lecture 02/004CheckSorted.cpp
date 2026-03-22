#include<iostream>
using namespace std;
bool f(int* x , int n, int i){
    //base case
    if(i==n-1){
        return true;
    }
    //recursive case
    //check if the array is sorted from index i to n-1 [0...n-1]
    //1. ask your friend to check if the array is sorted from index i+1 to n-1
    return x[i]<x[i+1] && f(x, n, i+1);
}
int main(){
    int X[] = {10,20,30,40,50};
    int n = sizeof(X)/sizeof(int);
    f(X, n, 0) ? cout<<"Sorted!"<<endl:
                 cout<<"Not Sorted!"<<endl;


    return 0;
}
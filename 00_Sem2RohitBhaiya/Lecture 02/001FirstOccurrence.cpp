#include<iostream>
using namespace std;
int f(int* x, int n, int t, int i){
    //base case
    // if(i==n){
    //     return -1;
    // }
    if (i==n-1)
    {
        if(x[i]==t){
            return i;
        }
        else{
            return -1;
        }
    }
    //recursive case
    //search for the target t in the array from index i to n-1 i.e. [0...n-1]
    if(x[i]==t){
        return i;
    }
    //ask your friend to search for the target t in the array from index i+1 to n-1
    f(x,n, t,i+1);
} 
int main(){
    int x[] = {10,20,30,20,30};
    int n = sizeof(x)/sizeof(int);
    int t = 30;
    cout<< f(x, n, t, 0);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void solve(int index, vector<int>& arr, vector<int>& ds, int sum, int k){
    if (index == arr.size()){
        if (sum == k){
            for (auto x : ds)
                cout << x << " ";

            cout << endl;
        }
        return;
    }

    ds.push_back(arr[index]);
    solve(index + 1, arr, ds, sum + arr[index], k);

    ds.pop_back();
    solve(index + 1, arr, ds, sum, k);
}

int main(){
    vector<int> arr = {1, 2, 1};
    vector<int> ds;

    int k = 2;

    solve(0, arr, ds, 0, k);
}
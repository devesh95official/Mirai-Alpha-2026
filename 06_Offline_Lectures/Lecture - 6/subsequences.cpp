#include <bits/stdc++.h>

using namespace std;

void subsequence(int index, vector<int>& arr, vector<int>& ds){
    if (index == arr.size()){
        if (ds.size() == 0)
            cout << "{}";

        for (auto x : ds)
            cout << x << " ";

        cout << endl;
        return;
    }

// take element
    ds.push_back(arr[index]);
    subsequence(index + 1, arr, ds);

// do not take element
    ds.pop_back();
    subsequence(index + 1, arr, ds);
}


int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> ds;

    subsequence(0, arr, ds);
}
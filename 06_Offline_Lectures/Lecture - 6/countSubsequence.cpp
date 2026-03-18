//Instead of printing, return the count.
int solve(int index, vector<int>& arr, int sum, int k){
    if (index == arr.size()){
        if (sum == k)
            return 1;
        else
            return 0;
    }

    int take = solve(index + 1, arr, sum + arr[index], k);

    int not_take = solve(index + 1, arr, sum, k);

    return take + not_take;
}
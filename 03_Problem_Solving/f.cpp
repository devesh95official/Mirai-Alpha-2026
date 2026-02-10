// lc - 475

#include <bits/stdc++.h>

using namespace std;



int main() {

    {
        auto Good = [&](long long r)->bool{
            // if this range heats all houses then true, else false
            for (int i = 0; i < houses.size(); i++) {
                auto it1 = upper_bound(heaters.begin(), heaters.end(), houses[i]);
                if (it1 != heaters.end()) {
                    long long dist = abs((*it1)-houses[i]);
                    if(dist<=r){
                        continue;
                    }
                }
                if(it1!=heaters.begin()){
                    long long dist = abs(houses[i] - *(--it1));
                    if(dist<=r){
                        continue;
                    }
                }
                return false;
            }
            return true;
        };
        //exception
        if (Good(0))return 0;
        long long l = 0, r = 1;
        while (!Good(r))r *= 2;
        while (l + 1 < r) {
            long long m = l + (r - l) / 2;
            if (Good(m))r = m;
            else l = m;
        }
        return r;
    }
    }

    return 0;
}
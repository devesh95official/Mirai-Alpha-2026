#include <bits/stdc++.h>

using namespace std;

void perm(int q, vector<bool> &vis, string ans) {
   if (q == 0) {
      cout << ans << endl;
      return;
   }

   for (int i = 0; i < vis.size(); i++) {

      if (!vis[i]) {

         vis[i] = true;

         perm(q - 1, vis, ans + "B" + to_string(i+1) + " ");

         vis[i] = false; // BACKTRACK
      }
   }
}

int main() {

   int n, q;
   cin >> n >> q;

   vector<bool> placed(n, false);

   perm(q, placed, "");

   return 0;
}
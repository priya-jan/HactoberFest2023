#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k){
   if (k > (n - 1) * (n - 2) / 2){
      cout << -1 << endl;
   }
   cout << (n - 1) * (n - 2) / 2 - k + n - 1 << '\n';
   for (int i = 1; i < n; i++){
      cout << 1 << ", " << i + 1 << '\n';
   }
   int count = (n - 1) * (n - 2) / 2 - k;
   for (int i = 2; i <= n; i++){
      for (int j = i + 1; j <= n; j++){
         if (count <= 0){
            return;
         }
         cout << i << ", " << j << '\n';
         count--;
      }
   }
}
int main(){
   int N = 5;
   int K = 3;
   solve(N, K);
}

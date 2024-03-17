#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin >> n;
   vector<int> a(n);
   for(auto &x : a){
      cin >> x;
   }    
   sort(a.begin(),a.end());

   for(auto x : a){
      cout << x <<' ';
   }
   cout << endl;
}

signed main() {
   ios_base::sync_with_stdio (0);
   cin.tie (0);

   int t = 1;  // cin >> t;
   for (int tc = 1; tc <= t; tc++) {
      //cout<<"Case "<<tc<<": ";
      solve();
   }
   return 0;
}

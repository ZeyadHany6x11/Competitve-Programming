#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()


/*
 Problem linl : https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/F
 */

/*
Time Complexity: 𝑂(𝑛+𝑞)
Space Complexity: 𝑂(𝑛)
*/
signed main() {
    IOS;
//   Partial Sum 
    int n , q ;
    cin >> n >> q ;
    vector<int>v(n+1,0);
    vector<int>partial(n+2,0);
    for(int i =1; i<=n; i++) {
        cin >> v[i];
    }while(q--) {
        int l ,r ,value;
        cin >> l >> r >> value;
        partial[l]+= value;
        partial[r+1]-=value;
    }for(int i =1 ;i<=n;i++) {
        partial[i]+=partial[i-1];
    }for(int i =1;i<=n;i++) {
        cout << partial[i]+v[i]<<" ";
    }

    return 0;
}

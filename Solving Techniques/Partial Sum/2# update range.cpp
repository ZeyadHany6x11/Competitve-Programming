#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define PI 3.14159

/*
 Problem link : https://codeforces.com/group/u3Ii79X3NY/contest/270254/problem/G
 */


signed main() {
    IOS;
//   Partial Sum
    int n , q ;
    cin >> n ;
    vector<int>v(n+1),partial(n+2,0);
    // n+2 first num to handle prefix[i-1] while using prefix sum and seond (last number ) to handle partial sum partial[r+1] to avoid out of bounds
    for(int i =1 ; i<=n ; i++) {
        cin >> v[i];
    }cin >> q ;
    while(q--) {
        int l ,r ;
        cin >> l >> r ;
        partial[l]+=1 ; // any number not only 1
        partial[r+1]-=1; // same number that add to index L
    }for(int i =1 ; i<=n;i++) {
        partial[i]+=partial[i-1];
    }

    // count nums didn't exist in any range in queries
    int count = 0 ;
    for(int i =1 ;i<=n;i++) {
        if(partial[i]==0) {
            count++;
        }
    }cout << count << endl;
    // print nums values
    for(int i =1 ; i<=n;i++) {
        if(partial[i]==0) {
            cout << v[i]<<" ";
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define PI 3.14159

/*
 Problem link : https://codeforces.com/group/p6hc42ieQe/contest/324287/problem/G
 */

/*
 When to use Prefix sums ?
 1- range sum
 2- xor, product , and , or
 3- frequency count
 4- static (no update) -> it means that the array you are working with does not change after the initial input
 # note cannot get MIN or MAX or GCD or LCM in any subarray using prefix sum but to Implement all of them we use *Sparse Table(advanced topic) instead of prefix sum
 */




int main() {
    IOS;
    // ----------- Prefix Sum --------------------
    // implement AND & OR in range using Prefix Sum
    int n;
    cin >> n;
    vector<int> v(n), pre(n+1, 0);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pre[0] = v[0];
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i-1] + v[i];
    }
    int q;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        l--; // Convert to 0-based index
        r--; // Convert to 0-based index

        int sum = pre[r] - pre[l-1];
        if(sum == r-l+1) {
            cout << 1 << " " << 1 << endl;
        } else if(sum > 0) {
            cout << 0 << " " << 1 << endl;
        } else {
            cout << 0 << " " << 0 << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define PI 3.14159

/*
 Problem link : https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/E
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
    // Range Sum query using Prefix Sum
    ll n , q ;
    cin >> n >> q ;
    vector<long long>v(n+1);
    vector<long long>prefixSum(n+1,0);
    for(ll i =1;i<=n;i++) {
        cin >> v[i] ;
        prefixSum[i]= v[i] + prefixSum[i-1];
    }
    while(q--) {
        ll L ,R;
        cin >> L >> R;
        ll result = prefixSum[R]-prefixSum[L-1];
        cout << result << endl;
    }


    return 0;
}


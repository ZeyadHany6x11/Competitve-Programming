#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define PI 3.14159

/*
 problem link : https://codeforces.com/group/u3Ii79X3NY/contest/270254/problem/J
 */

int main() {
    int n , m ;
    cin >> n >> m ;
    vector<int>v(n,0),freq(100005,0),suffix(n,0);
    int cnt =0;
    for(int i =0;i<n;i++) {
        cin >> v[i];

    }for(int i = n-1 ;i>=0;i--) {
        freq[v[i]]++;
        if(freq[v[i]]==1) { // to handle duplicate numbers
            cnt++;
        }
        suffix[i]=cnt;
    }while(m--) {
        int l ;
        cin >> l;
        l--; // because input will 1-based
        cout << suffix[l]<<endl;
    }


    return 0;
}

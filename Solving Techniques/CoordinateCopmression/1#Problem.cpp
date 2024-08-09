#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define PI 3.14159

/*
 Problem link : https://codeforces.com/group/9QrbarK7qH/contest/449618/problem/C
 */
struct coordinateCopmression{
private:
    vector<ll>init;
    void compress(vector<ll>&v)
    {
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end()); // make vector has unique elements
    }
public:
    coordinateCopmression(vector<ll>&v)
    {
        init=v;
        compress(init);
    }
    int index(ll val)
    {
        return lower_bound(all(init),val)-init.begin();
        // lower bound count elements that greater than or equal val and subtract it from init.begin() to count elements that is smaller than val
    }
    ll initVal(int idx)
    {
        return init[idx]; // get value by index
    }
};

int main() {
   int n ;
    cin >> n ;
    ll l[n],r[n];
    vector<ll>idx;
    for(int i =0;i<n;i++) {
        cin >> l[i]>>r[i];
        idx.push_back(l[i]);
        idx.push_back(r[i]);
    }
    coordinateCopmression co(idx);

    for(int i =0;i<n;i++) {
        l[i]=co.index(l[i]);
        r[i]=co.index(r[i]);
    }

    int partialsum[n+n+1]={};
    for(int i =0;i<n;i++) {
        partialsum[l[i]]++;
        partialsum[r[i]+1]--;
    }
    for(int i =1;i<n+n+1;i++) {
        partialsum[i]+=partialsum[i-1];
    }
    cout << *max_element(partialsum,partialsum+n+n+1);


    return 0;
}

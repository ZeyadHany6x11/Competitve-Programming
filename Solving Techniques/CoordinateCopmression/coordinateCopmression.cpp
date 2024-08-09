#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define PI 3.14159

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


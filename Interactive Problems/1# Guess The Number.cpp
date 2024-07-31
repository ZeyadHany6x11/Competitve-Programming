#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long;

// interactive function
string func(int x) {
    cout << x << endl;
    cout.flush();
    string s;
    cin >> s;
    return s;
}

signed main() {
    IOS;
    // using Binary Search Algorithm to guess the number
    int left = 1, right = 1e6; // right = the biggest value in problem constraint
    int ans = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        string x = func(mid);
        if (x == ">=") {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << "! " << ans << endl;

    return 0;
}

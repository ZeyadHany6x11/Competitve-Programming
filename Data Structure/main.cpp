#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define PI 3.14159



int main() {
     // Set
    // set : is an associative container that stores unique elements in a sorted order.

    set<int>st;
    st.insert(1);
    st.insert(0);
    st.insert(5);
    st.insert(11);
    st.insert(6);
    st.insert(11);
    st.insert(10);
    st.insert(8);
    // st = [0,1,5,6,8,10,11]

    for(auto it : st) {
        cout << it << endl;
    }
   // erase take ( value or pointer )
    st.erase(5);
    // st = [0,1,6,8,10,11]

    // begin() return the first element in the set
    cout << *st.begin()<<endl; // use astrik * before it to return value not reference

    // find() to find element in set or not
    auto it = st.find(11); // auto here = set<int>::iterator
    if(it==st.end()) {
        // it's mean the number not exist in the set
    }else {
        // mean number exist in set
    }
 // lower bound && upper bound
/*
    1# Upper bound
    Purpose: Finds the first element in the set that is greater than a given value.
    2# lower bound
    Purpose: Finds the first element in the set that is not less than (i.e., greater than or equal to) a given value.
 */

    auto it2 = st.upper_bound(6);

    if (it2 != st.end()) {
        cout << "upper bound of 6 is " << *it2 << endl;
    } else {
        cout << "No element found" << endl;
    }

auto x = distance(st.begin(),it2);
    // this function help us to know how many numbers less than or equal 6
    cout << x << endl; // output : 3 >> [0, 1, 6]




    return 0;
}
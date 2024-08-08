#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define PI 3.14159



int main()
{

    /*
        Map

        decleration
        insert
        erase
        begin
        end
        count
        find
        iterate
        clear in set map
        solve problem using map
    */


    //	key  value
    map<int, int>mp1;

    mp1[5]++;// mp = [5:1]
    mp1[5] = 2;// mp=[5:2]
   for (auto it:mp1){
   cout << it.first <<" "<<it. second<<endl; // 5 2
    }

    map<string, int > mp2;

    mp2["ahmed"] = 10;



    // begin , end
    map<string, int >::iterator it;
    it = mp2.begin();
    //without doing these do this ->>>> auto it = mp2.begin()

    cout << it->first << endl;

    cout << it->second << endl;

    it = mp2.end(); // iterator pointer to last pair in the map
    it--;

    cout << it->first << endl;

    cout << it->second << endl;

    // erase

    //key value
    mp2.erase("ahmed"); // erase by key

    // count , find

    if (mp2.count("ahmed") == 0){
        // note : count will equal 1 or 0 always because if i did mp2["ahmed"] = another value will swap between new val and old one
        cout << "NOT FOUND " << endl;
    }
    else cout << "FIND" << endl;


    if (mp2.find("ahmed") == mp2.end()){
        cout << "NOT FOUND " << endl;
    }
    else {
        cout << "FIND" << endl;
    }

    mp2["ahmed"] = 10;


    //iterate

    map<string, int >::iterator it1; // or auto it1 = mp2.begin()

    for (it1 = mp2.begin(); it1 != mp2.end(); it1++){
        string key = it1->first;
        int value = it1->second;
        cout << key << " " << value << endl;
    }

  // print pairs using for each and iterator
    for (auto it : mp2){
        cout << it.first << " " << it.second << endl;
    }

    mp2.clear(); // erase all elements in the map


    // solve problem
    /*
     for each char in string x count its frequency in the string
     */
    string x = "abacdefged";

    // 1# first solution without using map (just loops)
    // this solution will take O(n^2)
    for (int i = 0; i < x.size(); i++){
        int  c = 0;
        for (int j = 0; j < x.size(); j++){
            if (x[i] == x[j])
                c++;
        }
        cout << x[i] << " " << c << endl;
    }

    //2# second solution using map (best solution)
    /*
     time complexity : O(n*log m)
     - n : x.size()
     - m : number of unique characters
     log m ?
     Map insertion and increment : average time complexity of O(log m)
     */
    map<char, int>mpc;
    for (int i = 0; i < x.size(); i++){
        mpc[x[i]]++;
    }

    cout << mpc.size() << endl;

    for (auto it : mpc){
        cout << it.first << " " << it.second << endl;
    }

    // search for char
    if (mpc['m'] != 0){ // log (n)
        cout << "FOUND" << endl;
    }
    else {
        cout << "NOT FOUND " << endl;
    }

}

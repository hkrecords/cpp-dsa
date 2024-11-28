#include<bits/stdc++.h>
using namespace std;

// map - has keys and values - unique keys in sorted order

void explainList () {
    map<int, int> mpp;

    map<pair<int, int>, int> mp1; // here key is two integers and value is one.
    map<int, pair<int, int>> mp2; // here key is one integer and value is two integers. 

    mpp[1] = 2; // key - 1, value - 2
    mpp.emplace(3, 1); // key - 3, value - 1
    mpp.insert(2, 5); // key - 2, value - 5

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];
}


/* 
multimap - sorted but multiple same keys

unordered map - unique keys
 */
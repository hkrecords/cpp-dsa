#include<bits/stdc++.h>
using namespace std;

/* 
CPP STL is divided into four parts -
1. Algorithms
2. Containers
3. Functions
4. Iterators
 */

// Pairs- part of utility library

void pairFunction () {

    // pair
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second;

    // nested pair
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;

    // pair on array
    pair<int, int> arr[] = {{1, 3}, {2, 3}, {6, 9}};
    cout << arr[1].second;
}
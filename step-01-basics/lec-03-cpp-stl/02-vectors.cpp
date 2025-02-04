#include<bits/stdc++.h>
using namespace std;

// vector - container, dynamic

void vectorFunction () {
    vector<int> v;

    // generally, emplace_back is faster than push_back
    v.push_back(1);
    v.emplace_back(2);

    // vector of pair data type
    vector<pair<int, int>> vec;

    vec.push_back({1, 3}); // push_back -> {}
    vec.emplace_back(2, 3); // no need of {} here

    vector<int> v(4, 10); // {10, 10, 10, 10}
    
    vector<int> v(5); // {0, 0, 0, 0, 0} => or some garbage value

    vector<int> v1(5, 200); // {200, 200, 200, 200, 200}
    vector<int> v2(v1); // copies v1 

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " "; // * => access value at that memory

    // iterator => begin, end, rend, rbegin
    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin(); // rend & rbegin are never used

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

     // in stl, u can use auto and it will automatically identify
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // for each loop 
    for (auto it : v) {
        cout << it << " ";
    }

    // erase
    v.erase(v.begin() + 1);

    // erase[start, end)
    v.erase(v.begin() + 2, v.begin() + 4);

    // insert
    vector<int> vec(2, 100);   // 100, 100
    // vec.insert(vec.begin(), 300);  // 300, 100, 100
    // vec.insert(vec.begin()  + 1, 2, 10); // 300, 10, 10, 100, 100

    // size 
    cout << v.size();

    // pop_back -> pops last element
    v.pop_back();

    // swaps vectors ie - v1 swaps v2
    v1.swap(v2);

    // erase entire vector
    v.clear();

    // true/false 
    v.empty();
}
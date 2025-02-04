#include<bits/stdc++.h>
using namespace std;

// list - similar to vector - container & dynamic 

void explainList () {
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(3);

    ls.push_front(1);

    ls.emplace_front(); 

    // rest same as vector - begin, end, rbegin, rend, clear, insert, side, swap
}

/* 
deque

stack

queue

priority_queue

set

multiset

unordered_set
 */
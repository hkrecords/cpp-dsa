// numbers, float, strings, char, etc -> data types -> in c++ we have to define data types

#include<bits/stdc++.h>
using namespace std;

int main () {
    // int - 4 bytes - range (round off) -> 10^-9 to 10^9
    int a = 10;

    // long - 4 bytes - range (round off) -> 10^-12 to 10^12
    long b = 20000000;

    // long long - 8 bytes - range (round off) -> 10^-18 to 10^18
    long long c = 3000000000000; 

    // float - 4 bytes & double - 8 bytes
    float d = 5.6;
    float e = 4; // integers can also be stored in float, etc.

    // string & getline
    string f;
    cin >> f; // if hey hk -> only print before whitespace -> hey
    cout << f << endl;;

    string g, h;
    cin >> g >> h; // if hey hk -> picks & print both
    cout << g << " " << h << endl;

    string str;
    getline(cin, str); // picks whole line 
    cout << str << endl;

    // char - 1 byte
    char ch = 'g'; // '' -> declare a char & "" -> declare a string

    return 0;
}
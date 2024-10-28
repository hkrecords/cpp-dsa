/* 
A
BB
CCC
DDDD
EEEEE
 */

#include<bits/stdc++.h>
using namespace std;

void patternPrint(int n) {
    for (int i = 1; i <= n; i++) {
        char ch= 'A' + i - 1;
        for (int j = 1; j <= i; j++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    patternPrint(n);
    return 0;
}
/* 
ABCDE
ABCD
ABC
AB
A
 */

#include<bits/stdc++.h>
using namespace std;

void patternPrint(int n) {
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch <= 'A' + (n - i); ch++) {
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
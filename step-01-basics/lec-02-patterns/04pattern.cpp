/* 
1
22
333
4444
55555
 */

#include<bits/stdc++.h>
using namespace std;

void patternPrint(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i;
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
/* 
1      1
12    21
123  321
12344321
 */

#include<bits/stdc++.h>
using namespace std;

void patternPrint(int n) {
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // for (int j = 1; j < (2 * n + 1) - (2 * i); j++) { // a little confusing logic
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) { // reverse the value to mirror
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

int main () {
    int n;
    cin >> n;
    patternPrint(n);
    return 0;
}
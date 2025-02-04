/* 
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
 */

#include<bits/stdc++.h>
using namespace std;

void patternPrint(int n) {
    for (int i = 1; i <= n / 2; i++) {
        for (int j = 1; j <= n / 2 - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n / 2; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * (n / 2) - 1) - (2 * i - 1) + 1; k++) {
            cout << "*";
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
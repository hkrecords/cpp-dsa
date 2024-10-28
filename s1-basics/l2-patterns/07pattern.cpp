/* 
    *
   ***
  *****
 *******
*********
 */

#include<bits/stdc++.h>
using namespace std;

void patternPrint(int n) {
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
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
/* 
*
**
***
****
*****
****
***
**
*
 */

#include<bits/stdc++.h>
using namespace std;

void patternPrint(int n) {
    // for (int i = 1; i <= n / 2; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n / 2; i++) {
    //     for (int j = 1; j <= n / 2 - i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= 2 * n - 1; i++) {

        int stars = i;
        if (i > n) stars = 2 * n - i;
        
        for (int j = 1; j <= stars; j++) {
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
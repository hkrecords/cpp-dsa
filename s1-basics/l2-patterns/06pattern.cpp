/* 
12345
1234
123
12
1
 */

#include<bits/stdc++.h>
using namespace std;

void patternPrint(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n - i + 1; j++) {
            cout << j;
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
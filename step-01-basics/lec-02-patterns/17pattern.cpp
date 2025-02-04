/* 
    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA
 */

#include<bits/stdc++.h>
using namespace std;

void patternPrint(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i - 1) / 2;
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << ch;
            if (j <= breakpoint) ch++;
            else ch--;
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
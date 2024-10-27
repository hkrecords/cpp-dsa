// ask user to enter marks and print the grade accordingly.

#include<bits/stdc++.h>
using namespace std;

int main () {
    int marks;
    cin >> marks;

    if (marks <= 25) {
        cout << "F" << endl;
    } else if (marks <= 44) {
        cout << "E" << endl;
    } else if (marks <= 49) {
        cout << "D" << endl;
    } else if (marks <= 59) {
        cout << "C" << endl;
    } else if (marks <= 79) {
        cout << "B" << endl;
    } else if (marks <= 100) {
        cout << "A" << endl;
    } 
    return 0;
}
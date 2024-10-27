// take age from user and then decide eligible, not eligible, retirement soon, retirement time from the job.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int age; 
    cin >> age;

    if (age < 18) {
        cout << "Not Eligible for Job";
    } 
    else if (age <= 57) {
        cout << "Eligible for Job";
        if (age >= 55) {
            cout << ", but retirement soon";
        }
    } 
    else {
        cout << "retirement time";
    }

    return 0;
}
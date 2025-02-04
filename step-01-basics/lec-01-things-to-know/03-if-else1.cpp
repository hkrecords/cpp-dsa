// program that takes input of afe and prints if you are an adult or not

#include<bits/stdc++.h>
using namespace std;

int main () {
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "You are an Adult." << endl;
    } else {
        cout << "You are not an Adult." << endl;
    }

    return 0;
}

// it is not mandatory to have an else statement
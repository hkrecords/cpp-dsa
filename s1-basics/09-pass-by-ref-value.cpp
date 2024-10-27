#include<bits/stdc++.h>
using namespace std;


// pass by value => copy is passed
void forValue(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// pass by reference -> & => original vale is passed -> doesn't work on arrays because arrays are generally passed by references 
void forReference(int &num2) { // & -> takes address
    cout << num2 << endl;
    num2 += 5;
    cout << num2 << endl;
    num2 += 5;
    cout << num2 << endl;
}

int main () {
    int num = 10;
    forValue(num);
    cout << num << endl; // 10 - value doesn't change

    int num2 = 20;
    forReference(num2);
    cout << num2 << endl; // 30 - value changes

    return 0;
}
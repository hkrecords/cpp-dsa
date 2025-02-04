#include<bits/stdc++.h>
using namespace std;

/* 
Functions -
set of code that perform particular task
used to modularise code
used to increase readibility
use same code multiple times
 */

// void -> doesn't return anything
// return -> return something
// parameterised -> pass parameter
// non-parameterised -> no parameter passed

void printName () {
    cout << "Hey hk" << endl;
}

void printSomeName (string name) {
    cout << "hey " << name << endl;
}

int sum (int num1, int num2) {
    return num1 + num2;
}

int main () {

    // non-parameterised void 
    printName();

    // parameterised void
    string name;
    cin >> name;
    printSomeName(name);

    // return 
    int num1, num2;
    cin >> num1 >> num2;
    int finalSum = sum(num1, num2);
    cout << finalSum << endl;

    return 0;
}
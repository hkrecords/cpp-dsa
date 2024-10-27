// arrays -> similar data stored mulitple times -> use arrays
// stored in memory location -> stored consecutive memory address -> randomise location 
// zero indexing
// data type should be constant

#include<bits/stdc++.h>
using namespace std;

int main () {
    int arr[5]; // array of 5 elements
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]; // using indexing to enter value

    arr[3] += 10; // we can modify, change value

    cout << arr[3]; // access index 3

    // 2D-array

    int arrTwo[3][5]; // first -> row & second -> column

    arrTwo[1][3] = 77; // defining value
    cout << arrTwo[1][3]; 
    cout << arrTwo[2][4]; // print garbage value 

    // the location which you have not defined will store garbage value

    return 0;
}
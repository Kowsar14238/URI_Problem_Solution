///Reads a number T and fill a vector N[1000] with the numbers from 0 to T-1 repeated times.

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {

    int T, n = 1000, i;
    int arr[n];

    cin >> T;

    for (i = 0; i < n; i++) {
        arr[i] = i % T;
    }

    for (i = 0; i < n; i++) {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}

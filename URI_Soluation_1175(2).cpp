///Input an array N[20] and change the positions of the elements from first to last.

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

    int num=20, arr[num], i,j;

    // Read the input array
    for (i = 0; i < num; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    for (i = 0, j = num - 1; i < num / 2; i++, j--) {
        swap(arr[i], arr[j]);
    }

    // Print the reversed array
    for (int i = 0; i < num; i++) {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}



///Input an array N[20] and change the positions of the elements from first to last.

//#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int arr[20], temp;

    // Input array elements
    for (int i = 0; i < 20; i++) {
        cin >> arr[i];
    }

    // Swap the array elements
    for (int i = 0, j = 19; i < 10; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print the modified array
    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}

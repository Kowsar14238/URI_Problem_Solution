///Input an array N[20] and change the positions of the elements from first to last.

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

    int arr[20], i, temp;

    ///Input array elements
    for(i=0; i<20; i++)
        cin>> arr[i];

    ///Swap the array elements
    for(i=0; i<10; i++){

        temp = arr[i];
        arr[i] = arr[19-i];
        arr[19-i] = temp;

    }

    ///Print the modified array
    for(i=0; i<20; i++)
        cout<< "N["<< i<< "] = "<< arr[i]<< endl;

    return 0;
}

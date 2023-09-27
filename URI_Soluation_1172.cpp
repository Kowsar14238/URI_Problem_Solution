///Input 10 values and replace every null or negative values of Array

//#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    int arr[10], i;

    ///Store the array element by input from user
    for(i=0; i<10; i++){

        cin>> arr[i];

        if(arr[i] <= 0)
            arr[i] = 1; ///Replace negative or zero values with 1
    }

    ///Show all outputs at a time.
    for(i=0; i<10; i++){
        cout<< "X[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}

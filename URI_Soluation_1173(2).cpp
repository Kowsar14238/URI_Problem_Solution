///Input the initial value of an array N[10]. If the input number is 1, the array numbers ​​must be 1,2,4,8,....

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

    int inputValue, arr[10],i;

    cin>> inputValue;
    arr[0] = inputValue;

    for(i=1; i<10; i++)///Store the array element
        arr[i] = arr[i-1] * 2;

    for(i=0; i<10;i++)///Print the array element
        cout<< "N["<< i<< "] = "<< arr[i]<< endl;

    return 0;
}


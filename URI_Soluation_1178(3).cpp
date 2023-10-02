///Initial array N[100] and print subsequent position (1 up to 99) put half of the number inserted at the previous position.

//#include<bits/stdc++.h>
#include<iostream>
#include <iomanip>

using namespace std;

int main(){

    double inputNumber, arr[100];

    cin>> inputNumber;

    for(int i=0; i< 100; i++){

        arr[i] = inputNumber;
        inputNumber /= 2.0;
    }

    for(int i=0; i<100; i++)
       cout<< fixed<< setprecision(4)<< "N["<< i<< "] = "<< X<< endl;

    return 0;
}

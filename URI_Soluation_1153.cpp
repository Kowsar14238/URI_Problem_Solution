/// Calculate the factorial of a number. Factorial formula, N = N * (N-1) * (N-2) * (N-3) * ... * 1.

#include<bits/stdc++.h>
//#include<iostream>

using namespace std;

int main(){

    int num, fact=1, i;

    cin>> num;

    for(i=num; 1<=i; i--){
            fact = fact * i;
    }

    cout<< fact<< endl;

    return 0;
}


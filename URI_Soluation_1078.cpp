///  Multiplication Table

#include<bits/stdc++.h>
/*
#include<iostream>
*/
using namespace std;

int main(){
    int num, i, mulTable;

    cin>> num;

    for(i=1; i<=10; i++){
        mulTable = i * num;
        cout<< i<< " x "<< num<< " = "<< mulTable<< endl;
    }

    return 0;
}

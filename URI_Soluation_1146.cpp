///Input an 'X' times. For each X print the sequence from 1 to X

//#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int num, i;

    while(cin>> num){

        if(num==0)
            break;

        for(i=1; i<num; i++)
            cout<< i<< " ";

        cout<< num<< endl;/// It prints the last number of every line
    }

    return 0;
}



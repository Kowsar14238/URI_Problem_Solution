///  Print all numbers between 1 and 10000, which divided by N will give the rest = 2

#include<bits/stdc++.h>
/*
#include<iostream>
*/
using namespace std;

int main(){
    int num, i;

    cin>>num;

    for(i=1; i<10000; i++){
        if(i%num== 2){
            cout<< i<<endl;
        }
    }

    return 0;
}

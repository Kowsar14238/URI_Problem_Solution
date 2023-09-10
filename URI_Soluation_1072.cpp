/// Inteval 2

#include<bits/stdc++.h>
/*
#include<iostream>
*/
using namespace std;

int main(){
    int num, evenCount=0, oddCount=0, evenSum=0, oddSum=0, i, x;

    cin>> num;

    if(num<10000){
        for(i=0; i<num; i++){
        cin>> x;
        if(x%2 == 0){
            evenCount++;
            evenSum += x;
        }
        else if(x%2 != 0){
            oddCount++;
            oddSum += x;
        }
    }
    }

    cout<<evenCount <<" in"<< endl;
    cout<<oddCount <<" out"<< endl;

    return 0;
}

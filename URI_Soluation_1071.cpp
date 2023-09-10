/// Read two integer values. Print the sum of all odd values between them.

#include<bits/stdc++.h>
/*
#include<iostream>
*/
using namespace std;

int main(){
    int x, y, sum=0, i;

    cin>>x >>y;

    if(x>y){
        swap(x,y);
    }

    for(i=x+1; i<y; i++){
        if(i%2 != 0){
            sum += i;
        }
    }

    cout<< sum<< endl;

    return 0;
}

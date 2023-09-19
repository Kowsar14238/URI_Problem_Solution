///Input a value A and a value N. Print the sum of N numbers from A (inclusive)

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

    int a, n, i, sum=0;

    cin>> a;

    while(cin>>n){

        if(n>0)
            break;
    }

    for(i=a; i< a+n; i++)
        sum += i;

    cout<< sum<< endl;

    return 0;
}



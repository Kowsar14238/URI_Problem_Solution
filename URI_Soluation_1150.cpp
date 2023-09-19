///Count how many integers must be summed in sequence using 2 inputs

#include<bits/stdc++.h>
//#include<iostream>

using namespace std;

int main(){

    int num1, num2, sum=0, i=0;

    cin>> num1;

    while(cin>>num2){
        if(num2 > num1)
            break;
    }

    while(sum < num2){

        sum += num1;
        i++;
        num1++;
    }

    cout<< i<< endl;

    return 0;
}

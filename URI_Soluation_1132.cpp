/// Input two numbers and calculate the sum of all number between them which not divisible by 13
///check including inputs

//#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int num1, num2, sum=0, i, temp;

    cin>> num1>> num2;

    if(num1>num2){
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    for(i = num1; i<num2; i++){

        if(i %13 != 0)
           sum += i;
    }
    cout<< sum<< endl;

    return 0;
}

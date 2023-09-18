///Input two numbers X & Y (X < Y) and show a sequence of 1 to y, passing to the next line to each X numbers

#include<iostream>
//#include<bits/stdc++.h>

using namespace std;

int main(){

    int input1, input2, n=1, i;

    cin>> input1>> input2;

    for(i=1; i<=input2; i++){
        if(n==input1){
            cout<< i<< endl;
            n = 1;
        }
        else{
            cout<< i<< " ";
            n++;
        }
    }
        return 0;
}

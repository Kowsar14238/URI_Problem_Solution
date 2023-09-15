//#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){

    int num1, num2;

    while(true){
        cin>> num1>> num2;

        if(num1> num2)
            cout<< "Crescente"<< endl;
        else if(num1< num2)
            cout<< "Decrescente"<< endl;
        else if(num1 == num2)
            break;
    }
    return 0;
}

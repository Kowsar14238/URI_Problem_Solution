//#include<bits/stdc++.h>

#include<iostream>

using namespace std;

int main(){

    int num1, num2;

    while(true){
        cin>> num1>> num2;

        if(num1>0 & num2>0)
            cout<< "primeiro"<< endl;
        else if(num1>0 & num2<0)
            cout<< "quarto"<< endl;
        else if(num1<0 & num2<0)
            cout<< "terceiro"<< endl;
        else if(num1<0 & num2>0)
            cout<< "segundo"<< endl;
        else if(num1==0 || num2==0)
            break;
    }
    return 0;
}

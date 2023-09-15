//#include<bits/stdc++.h>

#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int testQuantity,i;
    float num1, num2;

    cin>> testQuantity;

    for( i=0; i< testQuantity; ++i){
        cin>> num1>> num2;

        float result=(num1 / num2);

        if(num2 == 0)
            cout<< "divisao impossivel"<< endl;
        else
            cout<< fixed<< setprecision(1)<< result<< endl;

    }
    return 0;
}

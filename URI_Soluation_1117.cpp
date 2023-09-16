///Score Validation

//#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    double num1, num2=0, valid=0;

    while(true){
        cin>> num1;

        if(num1<0 || num1>10)
            cout<< "nota invalida"<< endl;

        else if(valid == 0){
            num2 = num1;
            valid = 1;
        }
        else{
            cout<< "media = "<< fixed<< setprecision(2)<< (num1+num2)/2 <<endl;
            break;
        }
    }

    return 0;
}

///Triangle Types

#include<bits/stdc++.h>
using namespace std;

int main(){
    double value1, value2, value3;
    cin>> value1>> value2>> value3;

    if(value1 < value2){
        value1 = value1 + value2;
        value2 = value1 - value2;
        value1 = value1 - value2;
    }
    if(value1 < value3){
        value1 = value1 + value3;
        value3 = value1 - value3;
        value1 = value1 - value3;
    }
    if(value2 < value3){
        value2 = value2 + value3;
        value3 = value2 - value3;
        value2 = value2 - value3;
    }


    if(value1 >= (value2 + value3))
        cout<<"NAO FORMA TRIANGULO"<<endl;

    else if( (value1*value1) == (value2*value2) + (value3*value3))
        cout<<"TRIANGULO RETANGULO"<<endl;

    else if( (value1*value1) > (value2*value2) + (value3*value3))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;

    else if( (value1*value1) < (value2*value2) + (value3*value3))
        cout<<"TRIANGULO ACUTANGULO"<<endl;

    if(value1 == value2 && value2 == value3)
        cout<<"TRIANGULO EQUILATERO"<<endl;

    else if(value1 == value2 || value2 == value3 || value1 == value3)
        cout<<"TRIANGULO ISOSCELES"<<endl;


    return 0;
}

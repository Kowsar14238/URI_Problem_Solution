///Area of a Triangle or a Trapezium

#include<bits/stdc++.h>
using namespace std;

int main(){
    double A, B, C;

    cin>> A >>B >>C;

    if( A+B >C & A+C >B & B+C >A){
        cout<< "Perimetro = "<< fixed<< setprecision(1)<< (A+B+C)<< endl;
    }
    else{
        cout<< "Area = "<< fixed<< setprecision(1)<< ((A+B)*C) / 2<< endl;
    }
    return 0;
}

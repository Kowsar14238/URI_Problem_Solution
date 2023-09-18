

//#include<iostream>
//#include <math.h>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;

    cin>> num;

    if(num>=1 && num<=1000){
        for(int i=1; i<=num; i++){
            cout<< i<< " "<< pow(i,2)<< " "<< pow(i,3)<< endl;
            cout<< fixed<< setprecision(0) << i<< " "<< pow(i,2)+1<< " "<< pow(i,3)+1<< endl;
        }
    }
    return 0;
}

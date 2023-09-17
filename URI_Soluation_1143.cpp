///Input a number. Printed squared and cubic value between 1 to that number.

//#include<iostream>
//#include <math.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int num;

    cin>> num;

    if(num>=1 && num<=1000){
        for(int i=0; i<num; i++){
            cout<< i+1<< " "<< pow(i+1,2)<< " "<< pow(i+1,3)<< endl;
        }
    }

    return 0;
}

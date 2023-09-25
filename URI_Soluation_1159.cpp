//Print the sum of all consecutive odd numbers.

#include<bits/stdc++.h>
//#include <iostream>

using namespace std;

int main(){

    int startValue, i;

    while(cin>>startValue){

        int sum=0;

        if( startValue == 0)
            break;

        if(startValue % 2 != 0)
            startValue ++;

        for(i=0; i<5; i++){
            sum += startValue;
            startValue +=2;
        }

        cout<< sum<< endl;
    }

    return 0;
}

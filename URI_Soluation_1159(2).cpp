//Print the sum of all consecutive odd numbers.

#include<bits/stdc++.h>
//#include <iostream>

using namespace std;

int main(){

    int startValue, i;

    while(std::cin>>startValue){

        int sum=0;

        if( startValue == 0)
            break;

        if(startValue % 2 == 0)
            sum += startValue;
        else
            sum += ++startValue;

        for(i=0; i<4; i++){
            startValue +=2;
            sum += startValue;
        }

        std::cout<< sum<< endl;
    }

    return 0;
}

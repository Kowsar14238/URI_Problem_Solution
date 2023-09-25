///Print the sum of all consecutive odd numbers.

#include<bits/stdc++.h>
//#include <iostream>

using namespace std;

int main(){

    int testCase, startValue, nextNumbersCountValue, i;

    cin>> testCase;

    while(testCase--){

        int sum=0;//The initial value of sum must be declare into the loop. Otherwise output can be different.

        cin>> startValue>> nextNumbersCountValue;

        if(startValue % 2 == 0)
            startValue++;

        for(i=0; i<nextNumbersCountValue; i++){
            sum += startValue;
            startValue +=2;
        }

        cout<< sum<<endl;
    }

    return 0;
}

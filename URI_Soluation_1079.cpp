/// Weighted Averages

#include<bits/stdc++.h>
/*
#include <iostream>
*/
using namespace std;
int main() {
    int testCase, i;
    float value1, value2, value3, result;

    cin>>testCase;

    for(i=0; i<testCase; i++){
        cin>> fixed >> setprecision(1)>> value1>> value2>> value3;
        result = ( 2.0*value1 + 3.0*value2 + 5.0*value3 ) / 10;
        cout<< fixed << setprecision(1) << result<< endl;
    }

    return 0;
}

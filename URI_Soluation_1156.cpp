 /// Calculate the output of the series S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/? .

//#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float sum=1;
    int divisor=2, i;

    for(i=3; i<40; i++){

        sum += (float)i / (float)divisor;
        i++;
        divisor *= 2;
    }

    cout<< fixed<< setprecision(2)<< sum<< endl;


    return 0;
}

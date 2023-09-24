/// Calculate the output of the series S = 1 + 1/2 + 1/3 + … + 1/100

#include<bits/stdc++.h>
//#include <iostream>
//#include <iomanip>

using namespace std;

int main(){
    float sum=0;

    for( int i=1; i<=100; i++){
        sum += 1/float(i);
    }
    cout<< fixed<< setprecision(2)<< sum<< endl;

    return 0;
}


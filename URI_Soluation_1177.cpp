///Initial array N[1000] and print 0 to (input number - 1).

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

    int timeNumber, arr[1000], countNumber=0, i;

    cin>> timeNumber;

    for(i=0; i<1000; i++){

            cout<< "N["<< i<< "] = "<< countNumber<< endl;
            countNumber++;

            if(countNumber == timeNumber)
                countNumber = 0;
    }

    return 0;
}

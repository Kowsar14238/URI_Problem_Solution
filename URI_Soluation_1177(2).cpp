///Reads a number T and fill a vector N[1000] with the numbers from 0 to T-1 repeated times.

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

    int T, arr[1000], c=0, i;

    cin>> T;

    for(i=0; i<1000; i++){

            cout<< "N["<< i<< "] = "<< c<< endl;
            c++;

            if(c == T)
                c = 0;
    }

    return 0;
}

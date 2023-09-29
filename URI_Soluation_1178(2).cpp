///Initial array N[100] and print subsequent position (1 up to 99) put half of the number inserted at the previous position.

//#include<bits/stdc++.h>
#include<iostream>
#include <iomanip>

using namespace std;

int main(){

    double X, N[100];

    cin>>X;

    for(int i=0; i< 100; i++){

         cout<< fixed<< setprecision(4)<< "N["<< i<< "] = "<< X<< endl;
         X /= 2.0;

    }

    return 0;
}

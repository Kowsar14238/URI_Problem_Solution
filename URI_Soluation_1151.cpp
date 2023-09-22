/// 0 1 1 2 3 5 8 13 21 ... is known as the Fibonacci Sequence. Print the first N numbers of this sequence. N is the input value

#include<bits/stdc++.h>
//#include<iostream>

using namespace std;

int main(){

    int num, fibSeries[46], i;

    cin>> num;

    fibSeries[0] = 0;
    fibSeries[1] = 1;

    cout<< fibSeries[0]<< " "<< fibSeries[1]<< " ";

    for( i=2; i<num; i++){

        fibSeries[i] = fibSeries[i-1] + fibSeries[i-2]; //Sum previous and very previous index values of Array.

        if( i == (num-1))
            cout<< fibSeries[i]; //when Array index will be the previous value of input it will execute.
        else
            cout<< fibSeries[i]<< " ";
    }

    cout<< endl;

    return 0;
}

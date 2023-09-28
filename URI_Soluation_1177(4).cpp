///Reads a number T and fill a vector N[1000] with the numbers from 0 to T-1 repeated times.

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {

    int t, a, N[1000], i;

    std::cin >> t;
     a = 0;

    for(i = 0; i < 1000; i++){

            std::cout << "N[" << i << "] = " << a << endl;
            a++;

            if(a == t)
                a = 0;
    }
    return 0;

}


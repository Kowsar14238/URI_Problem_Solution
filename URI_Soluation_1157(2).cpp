/// Take an input and compute all its divisors.
///Using std Namespace

#include<bits/stdc++.h>
//#include<iostream>

using namespace std;

int main(){

    int num, i;

    std::cin>>num;

    for(i=1; i<=num; i++){
        if(num%i == 0)
            std::cout<< i<< endl;
    }

    return 0;
}
*/


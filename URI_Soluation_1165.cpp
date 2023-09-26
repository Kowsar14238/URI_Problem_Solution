//Count the case and test prime numbers

#include <iostream>
//#include<bits/stdc++.h>

using namespace std;

int main() {

    int testCase, i, number;

    cin>> testCase;

    while(testCase--){

        int flag=1; /// When flag=1 the number is prime and when flag=0 the number is not prime.

        cin>> number;

        for(i=2; i<number; i++){

            if(number%i == 0){
                flag=0;
                break;
            }
        }

        if(flag)///It means flag==1.
            cout<<number<<" eh primo"<<endl;

        else
            cout<<number<<" nao eh primo"<<endl;
    }

    return 0;
}

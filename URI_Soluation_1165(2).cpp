//Count the case and test prime numbers

//#include<bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

///This function will check that the input number is prime or not.
bool checkPrimeNumber(int number){

    if (number <= 1){
        return false;
    }
    if (number<= 3){
        return true;
    }
    if (number%2 == 0 || number%3 == 0){
        return false;
    }

    for (int i = 5; i * i <= number; i += 6){
        if (number%i == 0 || number%(i + 2) == 0){
            return false;
        }
    }

    return true;
}

int main(){

    int testCase, inputNumber;
    cin>> testCase;

    while (testCase--){

        cin>> inputNumber;

        if (checkPrimeNumber(inputNumber))
            cout<< inputNumber<< " is prime"<< endl;
        else
            cout<< inputNumber<< " is not prime"<< endl;

    }

    return 0;
}


///A number will be perfect if the sum of all its own positive divisors (excluding itself) is equal to the number itself.

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int testCase, number, sum, i, j;

    cin>> testCase;

    //Execute for every test case
    for(i=0; i < testCase; i++){
        cin>> number;//At every execution asking for a new nmber

        sum=0;

         //Execute for every input value
        for(j=1; j < number; j++){
            if(number % j == 0)//Check the divisors of the input value
                sum += j;
            else
                continue;
        }

        if(sum == number)
            cout<< number<< " eh perfeito"<< endl;
        else
            cout<< number<< " nao eh perfeito"<< endl;
    }

    return 0;
}

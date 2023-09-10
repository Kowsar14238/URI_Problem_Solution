/// Input X and print the 6 consecutive odd numbers from X.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int frstValue, endValue, i;

    cin>> frstValue;

    endValue = frstValue + 11;

    for(i = frstValue; i<=endValue; i++){
        if(i%2 == 1){
            cout<< i<< endl;
        }
    }

    return 0;
}

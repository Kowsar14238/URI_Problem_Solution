/// Calculate the average age of the group.

#include<bits/stdc++.h>
//#include <iostream>
//#include <stdio.h>
//#include <iomanip>
using namespace std;

int main(){

    int age, totalAge=0;
    float countAge=0, avgAge;

    while(cin>>age){
        if(age < 0)
            break;
        totalAge += age;
        countAge += 1;
    }

    avgAge = (totalAge / countAge);
    cout<< fixed<< setprecision(2)<< avgAge<< endl;

    return 0;
}

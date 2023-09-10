/// Even or Odd

#include<bits/stdc++.h>
/*
#include<iostream>
*/
using namespace std;

int main(){
    int num, i, x;

    cin>>num;

    for(i=0; i<num; i++){
        cin>>x;

        if (x == 0){
            cout << "NULL" << endl;
        }
        else if (x > 0 && x%2 == 0){
            cout << "EVEN POSITIVE" << endl;
        }
        else if (x > 0 && x%2 != 0){
            cout << "ODD POSITIVE" << endl;
        }
        else if (x < 0 && x%2 == 0){
            cout << "EVEN NEGATIVE" << endl;
        }
        else if (x < 0 && x%2 != 0){
            cout << "ODD NEGATIVE" << endl;
        }
    }

    return 0;
}

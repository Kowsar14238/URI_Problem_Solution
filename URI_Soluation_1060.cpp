/// Print a message with the total number of positive numbers.

#include<bits/stdc++.h>
using namespace std;

int main(){
    double num[6];
    int i, cont=0;

    for(i=0; i<6; i++){
        cin>> num[i];
        if(num[i] >= 0){
            cont++;
        }
    }
    cout<< cont<< " valores positivos"<< endl;

    return 0;
}

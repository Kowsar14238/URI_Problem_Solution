/// Count how many even values has between given 5 input numbers.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, i, coun=0;

    for(i=0; i<5; i++){
        cin>> num;
        if((num % 2 )==0){
            coun++;
        }
    }
    cout<< coun<< " valores pares"<< endl;

    return 0;
}

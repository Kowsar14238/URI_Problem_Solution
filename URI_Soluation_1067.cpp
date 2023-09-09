/// Print the odd numbers from 1 to X (1 <= X <= 1000).

#include<bits/stdc++.h>
using namespace std;

int main(){
    int value,i;

    cin>> value;

    for(i=1; i<=value; i++){
        if(i%2 == 1){
            cout<< i<< endl;
        }
    }
    return 0;
}

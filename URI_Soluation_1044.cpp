///Values are  Multiples or Not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin>> A>> B;

    if( (A % B == 0) || (B % A == 0) ) {
        cout<< "Sao Multiplos"<< endl;
    }
    else{
        cout<< "Nao Sao Multiplos"<< endl;
    }

    return 0;
}

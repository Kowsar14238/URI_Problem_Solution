/// Count how many Even, Odd, Positive & Negative values has between given 5 input numbers.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num[5], i, even=0, odd=0, pos=0, neg=0;

    for(i=0; i<5; i++){
            cin>> num[i];
        if(num[i]%2 == 0)
            even++;
        if(num[i]%2 != 0)
            odd++;
        if(num[i]>0)
            pos++;
        if(num[i]<0)
            neg++;
    }
    cout<< even << " valor(es) par(es)"<< endl;
    cout<< odd << " valor(es) impar(es)"<< endl;
    cout<< pos << " valor(es) positivo(s)"<< endl;
    cout<< neg << " valor(es) negativo(s)"<< endl;

    return 0;
}

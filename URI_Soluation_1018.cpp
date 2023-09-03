///Calculate the smallest possible number of banknotes.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int amount, temp, arr[7] = {100, 50, 20, 10, 5, 2, 1};

    cin>>amount;
    cout<<amount<<endl;

    for(int i=0; i<7; i++){
        temp = amount / arr[i]; //Count how many notes need
        amount = amount % arr[i]; //Calculate rest of amount

        cout<<temp <<" nota(s) de R$ " <<arr[i] <<",00" <<endl;
    }

    return 0;
}

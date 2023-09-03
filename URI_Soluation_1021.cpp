///Calculate the smallest possible number of banknotes & coins.

#include<bits/stdc++.h>
using namespace std;

int main(){

    double input_money;
    int coin_money, temp, note[7] = {100, 50, 20, 10, 5, 2, 1}, money_note[7], coin[5] = {50, 25, 10, 5, 1}, money_coin[5];

    cin>>input_money;
    temp = input_money;

     cout<<"NOTAS:"<<endl;

    for(int i=0; i<7; i++){
            money_note[i] = temp / note[i];//Count how many notes need for each
            temp = temp % note[i];//Calculate how much money remaining
    }
    for(int i =0; i<6; i++){
            cout<< money_note[i] <<" nota(s) de R$ " <<note[i] <<".00" <<endl;
    }

    coin_money = 100 * input_money;
    temp = coin_money % 100;

    cout<<"MOEDAS:"<<endl;
    cout<< money_note[6] <<" moeda(s) de R$ " <<(float )note[6] <<".00" <<endl;

    for(int i =0; i<5; i++){
            money_coin[i] = temp / coin[i];//Count how many coins need for each
            temp = temp % coin[i];//Calculate how much money remaining
            cout<<fixed<<setprecision(2) <<money_coin[i] <<" moeda(s) de R$ " <<coin[i]/100.0 <<endl;
    }

    return 0;
}

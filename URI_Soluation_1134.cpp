/// Most uses fuel count

//#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int num, alco=0, gaso=0, diesel=0;

    while(true){
        cin>> num;

        if(num ==1){
            alco ++;
            continue;
        }
        else if(num == 2){
            gaso ++;
            continue;
        }
        else if(num == 3){
            diesel ++;
            continue;
        }
        else if( num == 4)
            break;
        else
            continue;
    }
    cout<< "MUITO OBRIGADO"<< endl;
    cout<< "Alcool: "<< alco<< endl;
    cout<< "Gasolina: "<< gaso<< endl;
    cout<< "Diesel: "<< diesel<< endl;

    return 0;
}

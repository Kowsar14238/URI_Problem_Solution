//#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){
    int pass;

    while(true){
        cin>> pass;

        if(pass != 2002)
            cout<< "Senha Invalida"<< endl;
        else
            cout<< "Acesso Permitido"<< endl;
            if(pass == 2002)
                break;
    }
    return 0;
}

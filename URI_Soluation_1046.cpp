///Calculate Game Time

#include<bits/stdc++.h>
using namespace std;

int main(){
    double s, e, g, f;
    cin>>s >>e;

    if(s >= e){
        g = 24 - s;
        f = g + e;
        cout<< "O JOGO DUROU "<< f<< " HORA(S)"<< endl;
    }
    else if(e > s){
        g = 24 - s;
        f = g + e;
        f = f - 24;
        cout<< "O JOGO DUROU "<< f<< " HORA(S)"<< endl;
    }

    return 0;
}

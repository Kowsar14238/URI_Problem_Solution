///Calculate Game Time With Minutes

#include<bits/stdc++.h>
using namespace std;
/*
#include <iostream>
#include <cmath>
*/

int main() {
    int str_hour, str_mint, end_hour, end_mint;

    cin >> str_hour >> str_mint >> end_hour >> end_mint;

    int strt_time = str_hour * 60 + str_mint;
    int end_time = end_hour * 60 + end_mint;
    int duration = end_time - strt_time;

    if (duration <= 0) {
        duration = 1440 + duration;
    }

    int hours = duration / 60;
    int minutes = duration % 60;

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

    return 0;
}





/// Calculate the event duration in days, hours, minutes & seconds,  knowing obviously the begin and the end time of the event

#include<bits/stdc++.h>
using namespace std;

int main(){
    char dia1[5], dia2[5], del[5];
    int day1, hour1, mint1, sec1, day2, hour2, mint2, sec2, cal, cal1, cal2, w, x, y, z;

    cout<< "Input beginning info: "<<endl;
    cin>> dia1>> day1>> hour1>> del>> mint1>> del>> sec1;
    cout<< "Input finishing info: "<<endl;
    cin>> dia2>> day2>> hour2>> del>> mint2>> del>> sec2;
                                                                            // hour = 60*60 = 3600 & day = 24*60*60 = 86400
    cal1 = sec1 + (mint1 * 60) + (hour1 * 3600) + (day1 * 86400);
    cal2 = sec2 + (mint2 * 60) + (hour2 * 3600) + (day2 * 86400);

    cal = cal2 - cal1;
    w = cal / 86400; //Day
    cal = cal % 86400;
    x = cal / 3600; //Hour
    cal = cal % 3600;
    y = cal / 60; //Minute
    z = cal % 60; //Second

    cout<< w<< " dia(s)"<< endl;
    cout<< x<< " hora(s)"<< endl;
    cout<< y<< " minuto(s)"<< endl;
    cout<< z<< " segundo(s)"<< endl;

    return 0;
}

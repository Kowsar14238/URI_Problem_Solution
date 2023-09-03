///Calculate Year, Month, Day
#include<bits/stdc++.h>
using namespace std;

int main() {
    int input, year, month, day;

    cin>>input;

    year = input / 365;
    month = (input % 365) / 30;
    day = ((input % 365) % 30);

    cout<<year <<" ano(s)"<<endl;
    cout<<month <<" mes(es)"<<endl;
    cout<<day <<" dia(s)"<<endl;

    return 0;
}

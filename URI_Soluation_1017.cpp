///Calculate needs of  fuel using spent time & average speed.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int spent_time, avg_speed;
    double fuel;

    cin>>spent_time >>avg_speed;
    fuel = (spent_time * avg_speed) / 12.0; //Car spreed 12 Km/L

    cout<<fixed<<setprecision(3)<<fuel <<endl;

    return 0;
}


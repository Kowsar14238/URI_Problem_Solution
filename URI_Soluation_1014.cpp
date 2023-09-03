///Calculate a car's average cost or consumption of fuel using total distance traveled.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int distance;
    double fuel, cost;

    cin>>distance >>fuel;
    cost = distance / fuel;

    cout<<fixed<<setprecision(3)<<cost << " km/l"<<endl;

    return 0;
}

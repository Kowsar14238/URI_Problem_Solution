///Print  the volume of a sphere being provided the value of it's radius

#include<bits/stdc++.h>
using namespace std;

int main(){
    int r;
    double shape;

    cin>>r;
    shape = (4.0/3) *  3.14159 * r*r*r;

    cout<<"VOLUME = "<<fixed<<setprecision(3)<<shape<<endl;

    return 0;
}

///Average of 2 float value

#include<bits/stdc++.h>
using namespace std;

int main() {
    float A, B, avg;

    cin>>A>>B;
    avg = (A*3.5 + B*7.5)/11;

    cout<<"MEDIA = "<<fixed<<setprecision(5)<<avg<<endl;

    return 0;
}

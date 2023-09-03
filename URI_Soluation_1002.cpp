///Calculate the area of a circle

#include<bits/stdc++.h>
using namespace std;

int main() {
    float A,R;

    cin>>R;
    A = 3.14159*(R*R);

    cout<<"A="<<fixed<<setprecision(4)<<A<<"\n";

    return 0;
}
///5% error

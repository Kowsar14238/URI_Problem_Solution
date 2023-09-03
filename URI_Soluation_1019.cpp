///Time Conversion.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int input, hour, mint, scnd;

    cin >> input;
    hour = input / 3600;
    mint = (input % 3600) / 60;
    scnd = (input % 3600) % 60;

    cout << hour << ":" << mint << ":" << scnd <<endl;

    return 0;
}

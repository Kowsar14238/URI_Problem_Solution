///Input a number which is the limit of output lines printed by this program.

//#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int num;

    cin>> num;

    for(int i=0; i<num*4;){
        cout<< i+1<<" " << i+2<<" " << i+3<<" " << "PUM"<< endl;
        i+=4;
    }

    return 0;
}

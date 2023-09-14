///prints the sequence where start I=1 to 9 & J=7/ 6/ 5.


#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i=1; i<10; i+=2){
        for(int j=7; j>4; j--){
            cout<<"I="<<i <<" J="<<j<<endl;
        }
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    int i=1;

    while(i<10){
            int j=7;
        while(j>4){
            cout<<"I="<<i <<" J="<<j<<endl;
            j--;
        }
        i+=2;
    }
    return 0;
}
*/

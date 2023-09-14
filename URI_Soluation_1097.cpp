///prints the sequence where start I=1 to 9 & J=7/ 6/ 5 add.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int j=7;

    for(int i=1; i<10; i+=2){
            cout<<"I="<<i<<" J="<<j<<endl;
            cout<<"I="<<i<<" J="<<j-1<<endl;
            cout<<"I="<<i<<" J="<<j-2<<endl;
            j+=2;
    }

    return 0;
}


/*

#include<bits/stdc++.h>
using namespace std;

int main(){

    int i=1, j=7;

    while(i<10){
        cout<<"I="<<i<<" J="<<j<<endl;
            cout<<"I="<<i<<" J="<<j-1<<endl;
            cout<<"I="<<i<<" J="<<j-2<<endl;
            i+=2;
            j+=2;
    }
    return 0;
}
*/

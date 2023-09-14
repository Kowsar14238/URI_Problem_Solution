///prints the sequence where start I=0 to 2 & J=1/ 2/ 3 add.

#include<bits/stdc++.h>
using namespace std;

int main(){

    for(float i=0; i<=2.2; i+=0.2){
        cout<< "I="<< i<< " J="<< 1+ i<< endl;
        cout<< "I="<< i<< " J="<< 2+ i<< endl;
        cout<< "I="<< i<< " J="<< 3+ i<< endl;
    }

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    float i=0;

    while(i<=2.2){
        cout<< "I="<< i<< " J="<< 1+ i<< endl;
        cout<< "I="<< i<< " J="<< 2+ i<< endl;
        cout<< "I="<< i<< " J="<< 3+ i<< endl;

        i += 0.2;
    }
    return 0;
}
*/

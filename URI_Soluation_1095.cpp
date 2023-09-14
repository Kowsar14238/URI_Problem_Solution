///prints the sequence where start I=1 & J=60. Now I=? if J=0.

/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    int i=1, j=60, count;

    for(count=1; j>=0; count++){
        cout<< "I="<< i<< " J="<< j<< endl;
        i +=3;
        j -= 5;
    }

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int i=1, j=60;

    while (j >= 0) {
        cout << "I=" << i << " J=" << j << endl;
        i += 3;
        j -= 5;
    }

    return 0;

}


///  print the chosen animal defined by these three words according to the table below.

#include<bits/stdc++.h>
using namespace std;

int main(){
    char word1[15], word2[15], word3[15];

    cin>> word1>> word2>> word3;

    if(word1[0] == 'v'){
        if(word2[0] == 'a'){
            if(word3[0] == 'c'){
                cout<< "aguia"<< endl;
            }
            else if(word3[0] == 'o'){
                cout<< "pomba"<< endl;
            }
        }
        else if(word2[0] == 'm'){
            if(word3[0] == 'o'){
                cout<< "homem"<< endl;
            }
            else if(word3[0] == 'h'){
                cout<< "vaca"<< endl;
            }
        }
    }
    else if(word1[0] == 'i'){
        if(word2[2] == 's'){
            if(word3[2] == 'm'){
                cout<< "pulga"<< endl;
            }
            else if(word3[2] == 'r'){
                cout<< "lagarta"<< endl;
            }
        }
        else if(word2[0] == 'a'){
            if(word3[0] == 'h'){
                cout<< "sanguessuga"<< endl;
            }
            else if(word3[0] == 'o'){
                cout<< "minhoca"<< endl;
            }
        }
    }

    return 0;
}

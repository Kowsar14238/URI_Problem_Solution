///Several Scores with Validation

#include<bits/stdc++.h>

using namespace std;

int main(){

    double x, y=0, valid=0, option=0;

    while(true){

        cin>> x;

        if(option ==1){

                if(x == 2)
                    break;

                else if(x == 1){
                    option = 0;
                    continue;
                }
                else{
                    cout<< "novo calculo (1-sim 2-nao)"<< endl;
                    continue;
                }
        }
        else{
            if(x<0 || x>10)
                cout<< "nota invalida"<< endl;

            else if(valid ==0){
                y = x;
                valid = 1;
            }

            else{
                cout<< "media = "<< fixed<< setprecision(2)<< (x+y)/2 <<endl;
                valid = 0;
                option = 1;
            }
        }
        if(option ==1)
            cout<< "novo calculo (1-sim 2-nao)"<< endl;
    }

    return 0;
}

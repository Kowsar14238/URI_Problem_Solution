/// Find the amount of positive numbers & their average.

#include<bits/stdc++.h>
using namespace std;

int main(){
    double num, total=0;
    int i, coun=0;

    for(i=0; i<6; i++){
      cin>> num;

      if(num> 0){
        coun++;
        total += num;
      }
    }
    cout<< coun<< " valores positivos"<< endl;
    cout<< fixed<< setprecision(2)<< (total / coun)<< endl;

    return 0;
}

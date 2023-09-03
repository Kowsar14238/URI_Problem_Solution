///Bhaskara's Formula

#include<bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, root, x, y;

    cin>>a >>b >>c;

    if(a == 0){
        cout<<"Impossivel calcular" <<endl;
        return 0;
    }

    root = (b *b) - 4 *a *c;
    if(root >= 0){
        x = (-b + sqrt(root)) / (2 *a);
        y = (-b - sqrt(root)) / (2 *a);
        cout<< "R1 = "<< fixed <<setprecision(5) <<x <<endl;
        cout<< "R2 = "<< fixed <<setprecision(5) <<y <<endl;
    }
    else{
        cout<<"Impossivel calcular" <<endl;
    }

    return 0;
}

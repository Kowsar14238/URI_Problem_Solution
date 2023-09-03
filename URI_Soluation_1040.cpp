///Find average

#include<bits/stdc++.h>
using namespace std;

int main(){
    double num1, num2, num3, num4, avg, num, fAvg;

    cin>>num1 >>num2 >>num3 >>num4;

    avg =  ( num1*2 + num2*3 + num3*4 + num4*1) / 10;
    cout<< "Media: "<< fixed<< setprecision(1)<< avg<< endl;

    if(avg >= 7){
        cout<< "Aluno aprovado."<< endl;
    }
    else if(avg < 5){
        cout<< "Aluno reprovado."<< endl;
    }
    else if(avg >= 5  || avg <= 6.9){
        cout<< "Aluno em exame."<< endl;

        cin>> num;
        cout<< "Nota do exame: "<< num<< endl;

        fAvg = (avg + num)/2;

        if(fAvg >= 5){
            cout<< "Aluno aprovado."<< endl;
        }
        else if(fAvg < 4.9){
            cout<< "Aluno reprovado."<< endl;
        }
        cout<< "Media final: "<< fixed<< setprecision(1)<< fAvg<< endl;
    }

    return 0;
}

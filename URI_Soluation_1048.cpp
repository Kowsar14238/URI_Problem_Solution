///Salary Increase

#include<bits/stdc++.h>
using namespace std;

int main(){
    double salary;

    cin>> fixed>> setprecision(2)>> salary;

    if(salary>0 && salary<=400.00){
        cout<< "Novo salario: "<< fixed<< setprecision(2)<< ((salary + (salary/100)*15))<< endl;
        cout<< "Reajuste ganho: "<< fixed<< setprecision(2)<< (salary/100)*15<< endl;
        cout<< "Em percentual: 15 %"<< endl;
    }
    else if(salary>=400.01 && salary<=800.00){
        cout<< "Novo salario: "<< fixed<< setprecision(2)<< ((salary + (salary/100)*12))<< endl;
        cout<< "Reajuste ganho: "<< fixed<< setprecision(2)<< (salary/100)*12<< endl;
        cout<< "Em percentual: 12 %"<< endl;
    }
    else if(salary>=800.01 && salary<=1200.00){
        cout<< "Novo salario: "<< fixed<< setprecision(2)<< ((salary + (salary/100)*10))<< endl;
        cout<< "Reajuste ganho: "<< fixed<< setprecision(2)<< (salary/100)*10<< endl;
        cout<< "Em percentual: 10 %"<< endl;
    }
    else if(salary>=1200.01 && salary<=2000.00){
        cout<< "Novo salario: "<< fixed<< setprecision(2)<< ((salary + (salary/100)*7))<< endl;
        cout<< "Reajuste ganho: "<< fixed<< setprecision(2)<< (salary/100)*7<< endl;
        cout<< "Em percentual: 7 %"<< endl;
    }
    else if(salary>2000.00){
        cout<< "Novo salario: "<< fixed<< setprecision(2)<< ((salary + (salary/100)*4))<< endl;
        cout<< "Reajuste ganho: "<< fixed<< setprecision(2)<< (salary/100)*4<< endl;
        cout<< "Em percentual: 4 %"<< endl;
    }

    return 0;
}

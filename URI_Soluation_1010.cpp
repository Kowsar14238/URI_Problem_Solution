///input 2 product unit & price, Then print total amount

#include<bits/stdc++.h>
using namespace std;

int main(){
    int p_num1, p_unit1,  p_num2, p_unit2;
    double price1, price2, total;

    cin>>p_num1 >>p_unit1 >>price1 >>p_num2 >>p_unit2 >>price2;
    total = (p_unit1 * price1) + (p_unit2 * price2) ;

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;

    return 0;
}

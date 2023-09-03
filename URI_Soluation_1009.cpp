///Print the Total of Salary with Bonus of a Seller's

#include<bits/stdc++.h>
using namespace std;

int main(){
    string name ;
    double salary, sold_amount, total;

    cin>>name >>salary >>sold_amount;
    total = salary + ((sold_amount * 15)/100);

   cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;

    return 0;
}

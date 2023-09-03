///Print the Total of Salary with Bonus of a Seller's

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, salary;
    double hour_amount, total;

    cin>>num >>salary >>hour_amount;
    total = salary * hour_amount;

    cout<<"NUMBER = " <<num<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<total<<endl;

    return 0;
}

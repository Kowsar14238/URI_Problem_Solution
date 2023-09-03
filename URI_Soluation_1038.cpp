///Snack (input Product id & quantity then print total amount)

#include<bits/stdc++.h>
using namespace std;

int main() {
    int product_code, quantity;
    float total, arr[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};

    cin>> product_code>> quantity;
    total = arr[product_code] * quantity;
    cout<< "Total: R$ "<< fixed<< setprecision(2)<< total<< endl;

    return 0;
}

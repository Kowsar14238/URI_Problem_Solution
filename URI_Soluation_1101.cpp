/// Sequence of Numbers and Sum

#include<bits/stdc++.h>
using namespace std;

int main(){

    while(true){
        int input1, input2, temp;

        cin>> input1>> input2;

        if(input1<=0 || input2<=0)
            break;

        int sum=0;

        if(input1 > input2){
            temp = input1;
            input1 = input2;
            input2 = temp;
        }

        for(int i=input1; i<=input2; i++){
            cout<< i<< " ";
            sum += i;
        }
        cout<< "Sum="<< sum<< endl;

    }
    return 0;
}

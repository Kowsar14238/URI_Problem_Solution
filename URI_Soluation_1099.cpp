/// Sum of Consecutive Odd Numbers

/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, input1, input2, temp, sum;

    cin>> testCase;

    while(true){

        if(testCase == 0)
            break;

        cin>> input1>> input2;

        if(input1 > input2){
            temp = input1;
            input1 = input2;
            input2 = temp;
        }
        sum = 0;

        for(int i=input1+1; i<input2; i++){
            if(i%2 != 0)
                sum +=i;
        }

        cout<< sum<< endl;

        testCase--;
    }

    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, input1, input2, startValue, endValue;

    cin>> testCase;

    for(int i=0; i<testCase; i++){

        cin>> input1>> input2;

        int sum=0; //For every loop it make the sum as Zero (0).

        if(input1 < input2){
            for(int j=(input1+1); j<input2; j++){
                if(j%2 != 0)
                    sum += j;
            }
        }
        else{
            for(int j=(input2+1); j<input1; j++){
                if(j%2 != 0)
                    sum += j;
            }
        }
        cout<< sum << endl;
    }

    return 0;

}
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int testCase, input1, input2, startValue, endValue;

    cin>> testCase;

    for(int i=0; i<testCase; i++){

        cin>> input1>> input2;
        int sum=0;

        startValue = min(input1, input2) + 1;
        endValue = max(input1, input2);

        for(int j=startValue; j<endValue; j++){
            if(j%2 != 0)
                sum +=j;
        }

        cout<< sum << endl;
    }

    return 0;
}



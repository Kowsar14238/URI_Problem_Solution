///Input 15 numbers and store them into even and odd array. Only 5 elements can store at a time.

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

    int even[5], odd[5], evenCount=0, oddCount=0, num, i, j, k;

    for(i=0; i<15; i++){

        cin>> num;

        ///Even number check
        if(num % 2 ==0){

            ///Check if the even array is full
            if(evenCount ==5){

                ///Print the even array elements
                for(j=0; j<5; j++){

                    cout<< "par["<< j<< "] = "<< even[j]<< endl;
                    evenCount=0; ///Reset the even array counter

                }
            }
            even[evenCount++] = num; ///Store the even number in the even array
        }

        ///If number is not even
        else{

            ///Check if the odd array is full
            if(oddCount ==5){

                ///Print the odd array elements
                for(j=0; j<5; j++){

                    cout<< "impar["<< j<< "] = "<< odd[j]<< endl;
                    oddCount=0; ///Reset the odd array counter

                }
            }
            odd[oddCount++] = num; ///Store the odd number in the odd array
        }

    }

    ///Print the remaining odd numbers
    for(k=0; k<oddCount; k++)
        cout<< "impar["<< k<< "] = "<< odd[k]<< endl;

    ///Print the remaining even numbers
    for(k=0; k<evenCount; k++)
        cout<< "par["<< k<< "] = "<< even[k]<< endl;

    return 0;
}

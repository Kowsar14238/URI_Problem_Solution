///Input 15 numbers and store them into even and odd array. Only 5 elements can store at a time.

//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {

    int odd[5], even[5], oddCount = 0, evenCount = 0, num, i, j, k;

    for (i = 0; i < 15; i++) {

        cin >> num;

        if (num % 2 == 0) {

            even[evenCount] = num;
            evenCount++;

            if (evenCount == 5) {

                for(j = 0; j < 5; j++){
                    cout<< "par["<< j<< "] = "<< even[j]<< endl;
                }
                evenCount = 0;
            }
        }

        else{

            odd[oddCount] = num;
            oddCount++;

            if(oddCount == 5) {

                for (j = 0; j < 5; j++) {
                    cout<< "impar["<< j << "] = "<< odd[j]<< endl;
                }
                oddCount = 0;
            }
        }
    }

    // Print remaining elements in odd and even arrays
    for (i = 0; i < oddCount; i++)
        cout << "impar[" << i << "] = " << odd[i] << endl;

    for (i = 0; i < evenCount; i++)
        cout << "par[" << i << "] = " << even[i] << endl;

    return 0;
}





///Print the sum of all consecutive odd numbers.

#include<bits/stdc++.h>
//#include <iostream>

int main(){
    int  testCase, startValue, nextNumbersCountValue, i;

    std::cin >> testCase;

    for( i = 0; i < testCase; i++){
            std::cin >> startValue;
            std::cin >> nextNumbersCountValue;

            int sum = 0;

            if(startValue % 2 != 0){
                   sum+=startValue;
            }
            else{
                   startValue+=1;
                   sum += startValue;
            }

            for(int i=0; i < (nextNumbersCountValue-1); i++){
                    startValue += 2;
                    sum += startValue;
            }

            std::cout << sum << "\n";
    }
    return 0;
}

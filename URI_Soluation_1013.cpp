///Find the greatest number from 3 integer value.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, s, result;

    cin>>a >>b >>c;
    s = (a + b + abs(a - b)) / 2;
    result = ( s+ c + abs(c - s))/ 2;
//abs() returns the absolute value of an integer number.

    cout<<result << " eh o maior"<<endl;

    return 0;
}

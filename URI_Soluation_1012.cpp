///Calculate the area of the [Rectangle Triangle], [Radius's Circle],
/// [Trapezium], [Square], [Rectangle]

#include<bits/stdc++.h>
using namespace std;

int main(){
    float a, b, c ,triangle, circle, trapezium, square, rectangle;

    cin>>a >>b >>c;

    triangle = 0.5 * a *c;
    circle =  3.14159 * c*c;
    trapezium = ((a + b)/2) *c;
    square = b * b;
    rectangle = a*b;

    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<triangle<<endl;
    cout<<"CIRCULO: "<<circle<<endl;
    cout<<"TRAPEZIO: "<<trapezium<<endl;
    cout<<"QUADRADO: "<<square<<endl;
    cout<<"RETANGULO: "<<rectangle<<endl;

    return 0;
}

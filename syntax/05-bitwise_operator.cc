#include<iostream>
using namespace std;


int main(){
    int a = 4;
    int b = 6;

    //bitwise operators
    cout << " a&b " << (a&b) << endl;
    cout << " a|b " << (a|b) << endl;
    cout << " ~a " << ~a << endl;
    cout << " a^b " << (a^b) << endl;

    //Left Shift (for smaller no. it become twice or multiply by the power of 2 as many as shift we are doing)
    cout << (5<<1) << endl;

    //Right Shift (divide by 2 as many times as we want to shifr)
    cout << (5<<2) << endl; // Right shift 5 by 2

}
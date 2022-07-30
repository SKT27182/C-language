#include<iostream>
using namespace std;

int main(){

    char b = 'z';
    cout << "ASCII code of "<< b << " is: "<< int(b) << endl;
    cout << "Size of char: " << sizeof(b) << "byte" << endl;


    int a = 123;
    cout << "Size of int: " << sizeof(a) << "bytes" << endl;


    bool bl = true;
    cout << "Size of boolean: "<< sizeof(bl) << "byte" << endl;

    float f = 12.23;
    cout << "Szie of float: " << sizeof(f) << "bytes" << endl;

    double d = 12.33;
    cout << "Size of double: " << sizeof(d) << "bytes" << endl;

    //1 byte = 8 bit
    // In ASCII table A-Z = 65-90
    // a-z = 97-122

}
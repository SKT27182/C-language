#include<iostream>
using namespace std;

int main(){

    // find which no. is greater
    int a , b;
    cout << "Enter two numbers:"<< endl;
    cin >> a >> b;
    if (a> b){
        cout << a << " is greater than "<< b << endl;
    }else{
        cout << b << " is greater than "<< a << endl;
    }

    //check whether the no. is positive, negative or zero
    int c;
    cout << "Enter the numbers:"<< endl;
    cin >> c;
    if (c > 0){
        cout << "Entered no. is positive."<< endl;
    }else if (c < 0){
        cout << "Entered number is negative." << endl;
    }else {
        cout << "Entered number is Zero." << endl;
    }
    
}
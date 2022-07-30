#include<iostream>
using namespace std;

int main(){
    //Print numbers from 1 to n
    int n;
    cout << "Enter the last number: "<< endl;
    cin >> n;

    int i =1;

    while (i<= n){
        cout << i << " ";
        i+=1;
    }
}
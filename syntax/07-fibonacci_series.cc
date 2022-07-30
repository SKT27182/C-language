#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int i=0,j=1;
    cout << i << ' '<< j << ' ';
    for (int l=1;l <= n;l++ ){
        sum = i + j;
        i=j;
        j=sum;
        cout<< j << ' ';
    }
    
}
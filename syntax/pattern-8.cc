#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cin >> n;
    while(i<=n){
        int j=1;
        while(j<= n-i+1){
            cout << j;
            j+=1;
        }

        while(j<=n){
            cout << '*';
            j+=1;
        }
        j-=1;

        while(j>n-i+1){
            cout << '*';
            j-=1;
        }

        while (j>0){
            cout << j;
            j-=1;
        }

        cout<< endl;
        i+=1;
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n-i){
            cout << ' ';
            j+=1;
        }
        
        while (j<=n){
            cout << i + j -n ;
            j+=1;
        }
        j=j-2;

        while(i + j -n>0){
            cout << j;
            j-=1;
        }
        cout << endl;
        i+=1;


    }
}
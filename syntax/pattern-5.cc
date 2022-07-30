#include<iostream>
using namespace std;

/*int main(){
    int n;
    cin >> n;
    int i =1;
    while (i<=n){
        int j=i;
        int max =j;
        while(max > 0){
            cout << j << " ";
            j+=1;
            max-=1;
        }
        cout << endl;
        i+=1;
    }
}*/

int main(){
    int n;
    cin >> n;
    int i =1;
    while (i<=n){
        int j=i;
        while(j<=2*i-1){
            cout << j << " ";
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}
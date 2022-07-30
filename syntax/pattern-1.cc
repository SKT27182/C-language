#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i =1;
    while(i<n+1){
        int j = 1;
        while(j<n+1){
            cout<< j;
            j+=1;
        }
        cout << endl;
        i+=1;
    }

}

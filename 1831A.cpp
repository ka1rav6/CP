#include <iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int A[n];
        for (int i =0; i<n; i++) cin >>A[i];
        int B[n];
        for (int i=0; i<n; i++) B[i] = n+1-A[i];
        for (int i =0; i<n; i++) cout << B[i] << " ";
        cout <<"\n";
    }
}
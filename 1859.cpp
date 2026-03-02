#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >>n;
        int A[n];
        for(int i=0; i<n; i++) {
            cin >> A[i];
        }
        int max = A[0];
        for (int i = 1; i<n; i++) max = A[i]>max ? A[i] : max;
        int *B = new int[n];
        int* C = new int[n];
        int j =0, k=0;
        for (int i = 0; i<n; i++){
            if (A[i] == max){
                C[k++] = max;
            }
            else{
                B[j++] = A[i];
            }
        }
        if (k == n){
            cout << -1 << "\n";
            continue;
        }
        cout << j << " " << k << "\n";
        for (int i =0; i<j; i++) cout<< B[i] << " ";
        cout << "\n";
        for (int i =0; i<k; i++) cout<< C[i] << " ";
        cout << "\n";
        delete[] B;
        delete[] C;
    }
}
#include <iostream>
using namespace std;
#define k 101
void countingSort(int *A, int n){
    int* B = new int[n];
    int C[k];
    fill(C, C+k, 0);
    for (int i =0; i<n; i++) C[A[i]]++;
    for (int i =1; i<k; i++) C[i] += C[i-1];
    for (int i =0; i<n; i++){
        B[C[A[i]]-1] = A[i];
        C[A[i]]--;
    }
    for (int i = 0; i<n; i++) A[i] = B[i];
    delete[] B;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int *A = new int[n];
        for (int i =0 ;i <n; i++){
            cin >> A[i];
        }
        countingSort(A, n);
        if (A[0] == A[n-1]){
            cout<< "NO\n";
            continue;
        }
        cout<< "YES\n";
        cout << A[n-1] << " ";
        for (int i = 0; i<n-1; i++) cout << A[i] << " ";
        cout <<"\n";
        delete[] A;
    }
}
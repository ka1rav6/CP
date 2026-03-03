#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >>n;
        int minus=0, plus = 0;
        int A[n];
        for (int i =0; i<n; i++){
            cin >>A[i];
            if (A[i]==-1) minus++;
            else plus++;
        }
        if (plus>=minus){
            if (minus%2==0) cout<< 0 <<endl;
            else cout << 1 <<endl;
        }
        else{
            int ops=0;
            if (n%2) ops = 1+ (minus-plus)/2;
            else ops = (minus-plus)/2;
            minus -= ops;
            if (minus%2){
                cout << ops+1 << endl;
                continue;
            }
            cout << ops << endl;

        }
    }
}
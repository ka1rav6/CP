#include <iostream>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--){
        int n;
        cin >>n;
        int A[n];
        for (int i =0; i<n; i++) cin >>A[i];
        bool beautiful = false;
        for (int i = 0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if (gcd(A[i], A[j]) <= 2){
                    beautiful = true;
                    goto out;
                }
            }

        }
        out : if (beautiful) cout << "YES\n";
        else cout << "NO\n";    

    }
}
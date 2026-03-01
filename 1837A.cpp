#include <iostream>
using namespace std;

int main(){
    int t;
    cin>> t;
    while (t--){
        int x, k;
        cin >> x;
        cin >> k;
        if (k==1) cout<< -1 << "\n";
        if (x%k!= 0){
            cout<< 1 << "\n" << x<< "\n";
            continue;
        }
        else{
            cout << 2 << "\n";
            cout << 1 << " " << x-1 << "\n";
        }
    }
}
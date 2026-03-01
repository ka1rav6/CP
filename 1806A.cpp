#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b>d){
            cout << -1 << "\n" ;
            continue;
        }
        if (a + (d - b) < c){
            cout << -1 << "\n" ;
            continue;  
        }
        cout << 2*(d-b) + a -c<< "\n";
    }
    return 0;
}
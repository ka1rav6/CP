#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        int power = 1;
        while(power * 10 <= n){
            count += 9;
            power *= 10;
        }
        count += n / power;
        cout << count << "\n";
    }
    return 0;
}
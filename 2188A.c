#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int diff= n;
        int arr[n];
        int i = n-1;
        int k=1;
        while (i>=0) {
            arr[i--] = diff--;
            arr[i--]= k++;
    }
    for (int i =0; i<n; i++){
    printf("%d ", arr[i]);}
}
    return 0;
}
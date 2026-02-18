#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        char A[n];
        for (int i =0; i<n; i++) scanf(" %c", &A[i]);
        if (n<=1) {
        printf("1\n"); 
        continue;
        }
        int i=0;
        int k=n-1;
        while (i!=k){
            if (A[i]!=A[k] && abs(k-i)==1) {
                printf("0\n"); 
                break;}
            if (A[i]==A[k]){
                printf("%d\n", k-i+1);
                break;
            }
            else{
            i++;
            k--;}
        }
        if (i==k) printf("1\n");
    }
    return 0;
}
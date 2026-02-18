#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--){
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        if (a==b && a==n && n==b){
            printf("YES\n");
            continue;
        }   
        else if (a+b+2 <=n){
            printf("YES\n");
            continue;
        }
        else{
            printf("NO\n");
            continue;
        }
    }

    return 0;
}
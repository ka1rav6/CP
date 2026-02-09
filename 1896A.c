#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        int a[n];
        int mn = 1e9;
 
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] < mn) mn = a[i];
        }
 
        if (a[0] == mn)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

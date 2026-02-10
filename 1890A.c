#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    return (x > y) - (x < y);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        if (n == 1) {          //  IMPORTANT
            printf("YES\n");
            continue;
        }

        qsort(a, n, sizeof(int), cmp);

        int distinct = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1])
                distinct++;
        }

        if (distinct <= 2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}


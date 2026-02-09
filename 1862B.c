#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int *a = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        int *b = (int*)malloc((2 * n + 5) * sizeof(int));
        int m = 0;
        b[m++] = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                // drop: insert 1 before a[i]
                b[m++] = 1;
            }
            b[m++] = a[i];
        }
        printf("%d\n", m);
        for (int i = 0; i < m; i++) {
            printf("%d ", b[i]);
        }
        printf("\n");
        free(a);
        free(b);
    }
    return 0;
}

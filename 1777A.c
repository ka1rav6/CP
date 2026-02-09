#include <stdio.h>
#include <stdlib.h>

void operation(int *arr, int start, int *n) {
    arr[start] *= arr[start + 1];

    for (int i = start + 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

int main() {
    int cases;
    scanf("%d", &cases);
    while (cases--) {
        int n;
        scanf("%d", &n);
        int *arr = malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int k = 0, count = 0;
        while (k < n - 1) {
            if ((arr[k] * arr[k + 1]) % 2 == 0) {
                operation(arr, k, &n);
                count++;
                k = 0;  
            } else {
                k++;
            }
        }
        printf("%d\n", count);
        free(arr);
    }
    return 0;
}


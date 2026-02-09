#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int num;
        scanf("%d", &num);

        char stream[num + 1];
        scanf(" %s", stream);

        int count = 0;
        int countsim = 0;
        int found = 0;

        for (int i = 0; i < num; i++) {
            if (stream[i] == '.') {
                count++;
                countsim++;
                if (countsim == 3) {
                    printf("2\n");
                    found = 1;
                    break;
                }
            } else {
                countsim = 0;
            }
        }

        if (!found)
            printf("%d\n", count);
    }
    return 0;
}

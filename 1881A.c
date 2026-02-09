#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    int results[10000];

    for (int i = 0; i < t; i++) {
        int n, m;
        scanf("%d %d", &n, &m);

        char x[1005], s[1005], y[20005];
        scanf("%s", x);
        scanf("%s", s);

        int found = 0;

        for (int j = 0; j <= 10; j++) {
            if (strstr(x, s) != NULL) {
                if (j==9){
                    results[i]= -1;
                }
                else{
                    results[i] = j;
                    found = 1;
                    break;}
            }
            strcpy(y, x);
            strcat(x, y);
        }

        if (!found){
            results[i] = -1;}
        
    }

    for (int i = 0; i < t; i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}
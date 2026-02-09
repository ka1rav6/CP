#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int a,b,c;
        scanf ("%d %d %d", &a, &b, &c);
        if (a>b) printf("First\n");
        else if (a<b) printf("Second\n");
        else{
            if ((a+b+c)%2==0) printf("Second\n");
            else printf("First\n");
        }

    }
    return 0;
}

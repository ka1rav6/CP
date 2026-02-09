#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t );
    while (t--){
        int n,k;
        scanf("%d %d", &n, &k);
        int arr[n];
        for (int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        int found =0;
        for (int i=0; i<n-1; i++){
            if (arr[i]>arr[i+1]) found++;
        }
        if (!found) printf("YES\n");
        else if (found && k>1) printf("YES\n");
        else printf("NO\n");
    }   
    return EXIT_SUCCESS;
}

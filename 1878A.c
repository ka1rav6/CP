#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n,k;
        scanf("%d %d", &n, &k);
        int arr[n];
        for (int i = 0; i <n; i++) scanf("%d", &arr[i]);
        int found = 0;
        for (int i =0; i <n; i++){
            if (arr[i] == k){
                found =1;
            }
        }
        if (found) printf("YES\n");
        else{ printf("NO\n");}
   }
    return 0;
}
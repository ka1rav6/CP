#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i =0; i<n; i++) scanf("%d", &arr[i]);
        int sorted=1;
        int diffmin = arr[1]- arr[0];
        for (int i=0; i<n-1; i++){
            if (arr[i]- arr[i+1] >0) sorted=0;
            if (i!=0){
            if (arr[i+1]- arr[i]< diffmin) diffmin= arr[i+1] - arr[i];}
        }
        if (!sorted) {printf("%d\n", 0); continue;}
        else{
            printf("%d\n", (diffmin/2) + 1);
        }
        
    }



return 0;}

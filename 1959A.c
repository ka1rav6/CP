#include <stdio.h>
#include <stdlib.h>

void printArr (int *arr, int n){
    for (int i =0; i<n; i++) printf("%d ", arr[i]);
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
       int n;
       scanf("%d", &n);
       int arr[n];
       int foundeve=0, foundodd=0;
       for (int i=0; i<n; i++){
           scanf("%d", &arr[i]);
           if (arr[i]%2==0) foundeve++;
           else {foundodd++;}
       }
       if (foundodd*foundeve!=0){
            int B[foundeve], C[foundodd];
            int j=0,k=0;
            for (int i=0; i<n; i++){
                (arr[i]%2==0)? (B[j++]=arr[i]) : (C[k++] = arr[i]);
            }
            printf("%d %d\n", k , j);
            printArr(C,k); printf("\n"); printArr(B,j); printf("\n");
            continue;
        }
       int unique=1;
       for (int i=1; i<n; i++){
           if (arr[i-1] != arr[i]) unique++;
       }
       if (unique==1){ printf("-1\n"); continue;}
       
       int max= arr[0];
       int maxcount=0;
       for (int i=1; i<n; i++){
            if (max< arr[i]) {max = arr[i]; maxcount=1;}
            else if (max == arr[i]) maxcount++;
       }
       int B[n-maxcount], C[maxcount];
       int j=0,k=0;
       for (int i=0; i<n; i++){
            (arr[i]==max) ? (C[k++] = arr[i]) : (B[j++] = arr[i]);
       }
         printf("%d %d\n", j,k);
            printArr(B,j); printf("\n"); printArr(C,k); printf("\n");
       }
   return 0; 
}

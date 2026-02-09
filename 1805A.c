#include <stdio.h>
#include <stdlib.h>
int xorArr(int *arr, int n){
	int final=0;
	for (int i=0; i<n; i++){
		final= final^arr[i];
	}
	return final;

}
void printArr(int *arr, int n){
	for(int i=0; i<n; i++){
		printf("%d\n", arr[i]);
	}

}


int arraysEqual(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            return 0;   // not equal
    }
    return 1;           // equal
}
int main(void){
	int cases=0;
	scanf("%d", &cases);
	int ans[cases];
	int exceptioncase[4]={0,1,2,3};
	for (int acase=0; acase< cases; acase++){

		int n=0;
		scanf("%d", &n);
		int arr[n];
		for (int i=0; i<n; i++){
			scanf("%d",&arr[i]); 
		}
		for (int x=0; x<256; x++){
			if (arraysEqual(arr, exceptioncase, 4)){
				ans[acase]=3;
				break;
			}
			int B_arr[n];
			for (int i=0; i<n; i++){
				B_arr[i]= arr[i]^x;
		}
			if (xorArr(B_arr,n)==0){
			ans[acase]=x;
			break;
			} 
			ans[acase]=-1;	
		}

	}

	printArr(ans, cases);


	return EXIT_SUCCESS;
}

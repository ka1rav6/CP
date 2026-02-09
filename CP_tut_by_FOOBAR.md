### Random things

A permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order. For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array), and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).


>**MEX** of an array: Smallest non-negative integer which is not present in the array 


> n has max n^1/3^ factors __O(n^1/3^)__
```python
MEX ([0,1,2,3])= 4
MEX ([1,1,2]) = 0
#learn implementation
```
## Q1 : 2188A
```C
#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int diff= n;
        int arr[n];
        int i = n-1;
        int k=1;
        while (i>=0) {
            arr[i--] = diff--;
            arr[i--]= k++;
    }
    for (int i =0; i<n; i++){
    printf("%d ", arr[i]);}
}
    return 0;
}
// max on last, then least on n-2, then next max on n-3 etc
```
## Q2:  2194C
Iterate over all the factors of n, and see if the factor works:
Divide it into subarrays of those many factors and then see if the starting elelment of those subarrays can be same and if then the second element can be same etc etc.


__Bitmask__ (LEARN)


## Q3: 2193E

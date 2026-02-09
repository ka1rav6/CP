#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t;
    scanf("%d", &t);
    char ans[t];
    for (int i=0; i<t; i++) {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        if (n % 2 == 0) {
            ans[i]='y';
        } else if (n >= k && (n - k) % 2 == 0) {
		ans[i]='y';
        } else {
		ans[i]='n';
        }
    }
    for (int i=0; i<t; i++){
    	if (ans[i]=='y') printf("YES\n");
	if (ans[i]=='n') printf("NO\n");
    }
    return 0;
}


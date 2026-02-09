#include<stdio.h>

int abso(int x){
    if (x>=0){
        return x;
    }
    else{
        return -1*x;
    }}
int main()
{
    int test; 
    scanf("%d", &test);
    int min[test];


    for(int i=0; i<test; i++)
    {
        int n, x;
        scanf("%d %d", &n, &x);

        int station[n+1];
        station[0]=0;

        for(int j=1; j<=n; j++)
        {
            scanf("%d", &station[j]);
        }

        min[i]=abso(station[1]-station[0]);
        for(int z=1; z<=n; z++)
        {
               if(abso(station[z]-station[z-1])>min[i])
            {
                min[i]=(station[z]-station[z-1]);
            }
        }

        if(2*(x-station[n])>min[i])
        {
            min[i]=2*(x-station[n]);
        }
    }

    for(int k=0; k<test; k++)
    {
        printf("%d\n", min[k]);
    }
    return 0;
}
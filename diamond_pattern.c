#include <stdio.h>

int main()
{  int n=7,i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
        for(j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=0;i--){
        for(j=n-i;j>-1;j--){
            printf(" ");
        }
        for(j=2*i;j>-1;j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

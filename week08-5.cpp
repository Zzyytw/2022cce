#include <stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (k=1;k<=n;k++){
            if (k<=n-i) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}

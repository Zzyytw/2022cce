#include <stdio.h>
int a[50];
int main()
{
    int n,i;
    a[0] = 0;
    a[1] = 1;
    scanf("%d",&n);
    for (i=2;i<=n;i++) a[i] = a[i-2] + a[i-1];
    for (i=0;i<n;i++){
        if (i%3==0) printf("%d ",a[i]);
    }
}

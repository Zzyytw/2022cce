#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("請輸入5個數字(要加起來):");
    for (i=0;i<5;i++){
        scanf("%d",&n);
        sum+=n;
    }
    printf("總和是:%d",sum);
}

///51/68
#include <stdio.h>
int main()
{
    int i,a,b,ans;
    printf("請輸入2個數:\n");
    scanf("%d %d",&a,&b);
    for (i=1;i<=a;i++){
        if (a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d",ans);
}

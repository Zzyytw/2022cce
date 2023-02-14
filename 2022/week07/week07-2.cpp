#include <stdio.h>
int main()
{
    long long int a,b,i,z;
    scanf("%lld %lld",&a,&b);
    for (i=1;i<=a;i++){
        if (a%i==0 && b%i==0) z=i;
    }
    printf("最大公因數是:%lld",z);
}

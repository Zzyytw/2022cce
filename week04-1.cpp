#include <stdio.h>
int main()
{
    int z;
    printf("請輸入西元年分:");
    scanf("%d",&z);
    if (z%400==0) printf("閏年");
    else if (z%100==0) printf("平年/普通年");
    else if (z%4==0) printf("閏年");
    else printf("平年/普通年");
}

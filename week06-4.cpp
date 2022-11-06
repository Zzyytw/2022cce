#include <stdio.h>
int main()
{
    int a,b,c;
    printf("請輸入兩數:\n");
    scanf("%d %d",&a,&b);
    while (1){
        c = a%b;
        printf ("a:%d b:%d c:%d",a,b,c);
        if (c==0) break;
        a = b;
        b = c;
        }
    printf("最大公因數:%d",b);
}

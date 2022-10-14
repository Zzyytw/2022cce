#include <stdio.h>
int main()
{
    int a,b,c;
    printf("請輸入2個數:\n");
    scanf("%d %d",&a,&b);
    while (1){
        c = a%b;
        printf ("a:%d b:%d c:%d",a,b,c);
        if (c==0) break;
        a = b;
        b = c;
        }
    }
    printf("中的是:%d",b);
}

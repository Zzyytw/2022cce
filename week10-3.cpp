#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};
    for (int i=0;i<4;i++) printf("a[%d]:%d\n",i,a[i]);
    printf("上面正著印，下面倒著印\n");
    for (int i=3;i>=0;i--) printf("a[%d]:%d\n",i,a[i]);
}

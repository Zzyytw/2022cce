#include <stdio.h>
void dispnum(int a)
{
    printf("你丟給dispnum()的引數參數是:%d\n",a);
    return ;
}

int main()
{
    dispnum (100);
    dispnum (200);
}

#include <stdio.h>
void dispnum(int);
int main()
{
    dispnum (5);
}
void dispnum(int a)
{
    printf("你丟給dispnum()的引數參數是:%d\n",a);
    return ;
}

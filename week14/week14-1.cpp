#include <stdio.h>
int sum(int a,int b); ///���ŧi declare
int main()
{ ///�A�Τ��e�A�n���ŧi declare �� define
    int ans = sum(2,3); ///�ϥ� �I�s
    printf("%d",ans);
}
int sum(int a,int b) ///�w�q define
{
    return a+b;
} ///�^�� �^�_�H�a

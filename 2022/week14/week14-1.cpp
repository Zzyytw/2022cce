#include <stdio.h>
int sum(int a,int b); ///先宣告 declare
int main()
{ ///再用之前，要先宣告 declare 或 define
    int ans = sum(2,3); ///使用 呼叫
    printf("%d",ans);
}
int sum(int a,int b) ///定義 define
{
    return a+b;
} ///回傳 回復人家

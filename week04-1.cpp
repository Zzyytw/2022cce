#include <stdio.h>
int main()
{
    int z;
    printf("�п�J�褸�~��:");
    scanf("%d",&z);
    if (z%400==0) printf("�|�~");
    else if (z%100==0) printf("���~/���q�~");
    else if (z%4==0) printf("�|�~");
    else printf("���~/���q�~");
}

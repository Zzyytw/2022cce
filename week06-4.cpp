#include <stdio.h>
int main()
{
    int a,b,c;
    printf("�п�J2�Ӽ�:\n");
    scanf("%d %d",&a,&b);
    while (1){
        c = a%b;
        printf ("a:%d b:%d c:%d",a,b,c);
        if (c==0) break;
        a = b;
        b = c;
        }
    }
    printf("�����O:%d",b);
}

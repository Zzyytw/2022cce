#include <stdio.h>
int main()
{
    int n;
    for( int n=1 ; n<1000 ; n++){
        if (n%8==6 && n%9==7 && n%15==13){
            printf("�{�b��n:%d\n",n);
            printf("��8���l%d",n%8);
            printf("��9���l%d",n%9);
            printf("��15���l%d",n%15);
        }
    }
}
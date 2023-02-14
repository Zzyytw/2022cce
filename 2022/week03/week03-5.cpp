#include <stdio.h>
int main()
{
    int n;
    for( int n=1 ; n<1000 ; n++){
        if (n%8==6 && n%9==7 && n%15==13){
            printf("�{쫇ずn:%d\n",n);
            printf("Ξ8간푡%d",n%8);
            printf("Ξ9간푡%d",n%9);
            printf("Ξ15간푡%d",n%15);
        }
    }
}

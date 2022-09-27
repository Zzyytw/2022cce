#include <stdio.h>
int main()
{
    for( int n=1 ; n<1000 ; n++) {
        if (n%8==6 && n%9==7 && n%15==13) {
            printf("\n�{쫇ずn:%d\n",n);
            printf("Ξ8간푡%d\n",n%8);
            printf("Ξ9간푡%d\n",n%9);
            printf("Ξ15간푡%d\n",n%15);
        }
    }
}

///K&R

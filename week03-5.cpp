#include <stdio.h>
int main()
{
    int n;
    for( int n=1 ; n<1000 ; n++){
        if (n%8==6 && n%9==7 && n%15==13){
            printf("現在的n:%d\n",n);
            printf("用8除餘%d",n%8);
            printf("用9除餘%d",n%9);
            printf("用15除餘%d",n%15);
        }
    }
}

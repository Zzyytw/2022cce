#include <stdio.h>
int main()
{
    int i,j,z,y;
    for (i=0;i<5;i++){
        z=i*2-1;
        y=5-i;
        for (j=0;j<y;j++) printf (" ");
        for (j=0;j<z;j++) printf ("*");
        printf ("\n");
    }
}

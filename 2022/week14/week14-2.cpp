#include <stdio.h>
int z=10;
void func()
{
    printf("剛進來func()時，z是%d\n",z);
    z = 2;
    printf("在func()裡改，z是%d\n",z);
}
int main()
{
    func();
    printf("在main()裡，z是%d\n",z);
    z = 1;
    printf("在main()裡改，z是%d\n",z);
}

#include <stdio.h>
int z=10;
void func()
{
    printf("��i��func()�ɡAz�O%d\n",z);
    z = 2;
    printf("�bfunc()�̧�Az�O%d\n",z);
}
int main()
{
    func();
    printf("�bmain()�̡Az�O%d\n",z);
    z = 1;
    printf("�bmain()�̧�Az�O%d\n",z);
}

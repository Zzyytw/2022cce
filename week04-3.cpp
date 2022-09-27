#include <stdio.h>
int main()
{
	int z;
	scanf("%d",&z);
	if (z%400==0) printf("Yes");
	else if (z%100==0) printf("No");
	else if (z%4==0) printf("Yes");
	else printf("No");
}

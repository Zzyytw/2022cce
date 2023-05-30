#include <stdio.h>
int main()
{
	char c;
	while (scanf("%c",&c)==1){
		if (c>='0' && c<='9'){
			printf("%c\n",c);
			break;
		}
	}
}

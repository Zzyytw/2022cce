#include <stdio.h>
#include <string.h>
int main()
{
	char line[50];
	scanf("%s",line);
	int N = strlen(line);
	int i,yes=0;
	for (i=0;i<N;i++){
        if (line[i]==line[N-1-i]) yes++;
	}
    if (yes==N) printf("����yes�������A�O�j��\n");
    else printf("���O����yes�������A���O�j��\n");
}

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
    if (yes==N) printf("全部yes都收齊，是迴文\n");
    else printf("不是全部yes都收齊，不是迴文\n");
}

#include <stdio.h>
int main()
{
	char line[30];
	int total = 0;
	while(scanf("%s",line)==1){
		int i,ans=0;
		for(i=0;line[i]!=0;i++){
			if(line[i]=='2') ans++;
		}
		printf("%d\n",ans);
		total += ans;
	}
	printf("Total: %d\n",total);
}

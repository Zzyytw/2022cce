#include <stdio.h>
int a[100][100];
int main()
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++){
		for (j=0;j<m;j++) scanf("%d",&a[i][j]);
	}
	printf("\n");
	for (j=0;j<m;j++){
		for (i=n-1;i>=0;i--) printf("%2d ",a[i][j]);
		printf("\n");
	}
}

#include<stdio.h>
int main()
{
	int i, j, n, space, s;
	printf("enter the row:");
	scanf("%d",&n);
	s=n;
	for(i=0;i<n;i++)
	{
		for(space=s;space>0;space--)
		  printf("  ");
		s--;
		for(j=0;j<=i;j++)
		  printf("%c ",(char)(j+65));
		for(j=i-1;j>=0;j--)
		  printf("%c ",(char)(j+65));
		printf("\n");
	}
	return 0;
}
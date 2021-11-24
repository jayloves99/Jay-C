#include<stdio.h>

int main()
{
	int i,j,n,k,z;
	
	char num=0;
	printf("Enter a value : ");
	scanf("%d",&n);
//	num++;
//	printf("%d",num);


	for(i=1; i<=n; i++)
	{
		for(k=1; k<=n-i; k++)
		{
			printf(" ");
		}
		for(j=1,num='a'; j<=i; j++,num++)
		{
			printf("%c",num);
			
		}
		for(z=;z<=i-1;z++)
		{
			printf("*");
		}
		
	printf("\n");
	}
	
return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	printf("Enter a value");
	scanf("%d", &a);
	printf("Enter a value");
	scanf("%d", &b);
	printf("Enter a value");
	scanf("%d", &c);
	
	(a>b && a>c) ? printf("%d is bigger",a) : (b>a && b>c) ? printf("%d is bigger",b): printf("%d is bigger",c);
	
	return 0;
}

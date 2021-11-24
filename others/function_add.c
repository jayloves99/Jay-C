#include<stdio.h>
#include<conio.h>

int main()
{
	int a=10, b=20, c;
	c = add(a,b);	//actual parameter
	printf("%d\n",c);
	sqr(c);
}

int add(int x,int y) //formal parameter
{
	return(x+y);
}

void sqr(int x)
{
	printf("%d",x*x);	
}


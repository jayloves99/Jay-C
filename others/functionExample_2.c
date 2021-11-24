#include<stdio.h>
#include<conio.h>

int main()
{
	int a=10, b=20;
	//ap
	fun1(a);
	fun3(a,b);
	return 0;
}

void fun1(int a)
{
	printf("%d\t",a);
	printf("function 1\n");
	//ap
	fun2(a);	
}

void fun2(int z)
{
	printf("%d\t",z*z);
	printf("function 2\n");
//	fun3();
}

void fun3(int n1, int n2)
{
	printf("%d\t",n1+n2);
	printf("function 3\n");
//	fun1();
}

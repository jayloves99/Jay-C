#include <stdio.h>
#include <conio.h>

int main()
{

	int width, height, i, j;
	printf("Enter width");
	scanf("%d", &width);

	printf("Enter height");
	scanf("%d", &height);

	for (i = 1; i <= height; i++)
	{

		if (i == 1 || i == height)
		{
			for (j = 1; j <= width; j++)
			{
				printf("* ");
			}
		}
		else
		{
			for (j = 1; j <= width; j++)
			{
				if (j == 1 || j == width)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}

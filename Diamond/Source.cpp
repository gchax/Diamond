#include <stdio.h>
#include <math.h>

int main()
{
	int num, x, y;
	scanf_s("%d", &num);

	for (y = num-1; y >= -(num-1); y--)
	{
		for (x = -(num - 1); x <= num - 1;x++)
		{
			if (abs(x) + abs(y) < num)
			{
				printf("A");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
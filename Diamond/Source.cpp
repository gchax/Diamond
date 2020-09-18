#include <stdio.h>
#include <math.h>
void drawDiamond(int);

int main()
{
	int num;
	scanf_s("%d", &num);

	drawDiamond(num);

	return 0;
}

void drawDiamond(int n)
{
	int  x, y;
	for (y = n - 1; y >= -(n - 1); y--)
	{
		for (x = -(n - 1); x <= n - 1;x++)
		{
			if (abs(x) + abs(y) < n)
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
}
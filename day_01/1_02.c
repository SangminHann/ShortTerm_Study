#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m, num, min, max = 1;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		min = num;
		for (int j = 0; j < m - 1; j++)
		{
			scanf("%d", &num);
			if (min > num)
				min = num;
		}
		if (min > max)
			max = min;
	}
	printf("%d\n", max);

	return (0);
}
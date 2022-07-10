#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, dis, min, max;

	scanf("%d", &num);
	scanf("%d", &dis);
	min = max = dis;
	for (int i = 0; i < num - 1; i++)
	{
		scanf("%d", &dis);
		if (max < dis)
			max = dis;
		else if (min > dis)
			min = dis;
	}
	printf("%d", max - min);

	return (0);
}
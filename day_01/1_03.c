#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[21]; int rst = 0;

	scanf("%s", str);
	for (int i = 0; str[i]; i++)
	{
		if (rst <= 1 || str[i] <= '1')
			rst += str[i] - '0';
		else
			rst *= (str[i] - '0');
	}
	printf("%d\n", rst);

	return (0);
}
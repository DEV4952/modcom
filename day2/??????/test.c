#include <stdio.h>

int	main()
{
	float a,b;
	int ans;

	scanf("%f %f", &a, &b);
	scanf("%d", &ans);

	if(ans == (a+b))
	{
		printf("+");
	}
	else if(ans == (a-b))
	{
		printf("-");
	}
	else if(ans == (a*b))
	{
		printf("*");
	}
	else if (ans == (a/b))
	{
		printf("/");
	}

	return 0;
}

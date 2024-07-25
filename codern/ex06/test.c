#include <stdio.h>

int	main()
{
	char a[100];

	scanf("%s",&a);

	int b, d;
	char bro;
	
	sscanf(a, "%d%c%d", &b,&bro,&d);
	float ans;
	switch (bro)
	{
		case '+':
			ans = b + d;
			break;
		case '-':
			ans = b - d;
			break;
		case '/':
			ans = b / d;
			break;
		case '*':
			ans = b * d;
			break;
	}
	printf("%.2f", ans);
	return(0);
}

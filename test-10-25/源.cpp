#include<stdio.h>
int main()
{
	int a,b;
	printf(" ‰»Î ±º‰£ª");
	scanf("%d:%d", &a,&b);
	if (a <= 12)
		printf("%d:%02d", a,b);
	else
		switch (a) {
		case 13:printf("1:%02d",b);
			break;
		case 14:printf("2:%02d", b);
			break; 
		case 15:printf("3:%02d", b);
			break; 
		case 16:printf("4:%02d", b);
			break; 
		case 17:printf("5:%02d", b);
			 break; 
		case 18:printf("6:%02d", b);
			break;
		case 19:printf("7:%02d", b);
			break;
		case 20:printf("8:%02d", b);
			break;
		case 21:printf("9:%02d", b);
			break;
		case 22:printf("10:%02d", b);
			break;
		case 23:printf("11:%02d", b);
			break;
		case 24:printf("12:%02d", b);
			break;
		}
	return 0;
}

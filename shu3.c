#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;//变量a
	int b;//变量b
	int c;//变量c
	printf("请输入三个数");//提示输入三个数
	scanf("%d%d%d",&a,&b,&c);//输入三个数
	if (a>b&&a>c) {//a最大时
		if (b > c) {//c最小时
			printf("%d%d%d",a,b,c);//按顺序输出结果
		}
		else if (c > b) {//b最小时
			printf("%d%d%d",a,c,b);//按顺序输出结果
		}
	}
	if (b > a && b > c) {//b最大时
		if (a>c) {//c最小时
			printf("%d%d%d",b,a,c);//按顺序输出结果
		}
		else if (c>a) {//a最小时
			printf("%d%d%d",b,c,a);//按顺序输出结果
		}
	}
	if (c>a&&c>b) {//c最大时
		if (b>a) {//a最小时
			printf("%d%d%d",c,b,a);//按顺序输出结果
		}
		else if (a>b) {//b最小时
			printf("%d%d%d",c,a,b);//按顺序输出结果
		}
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;//����a
	int b;//����b
	int c;//����c
	printf("������������");//��ʾ����������
	scanf("%d%d%d",&a,&b,&c);//����������
	if (a>b&&a>c) {//a���ʱ
		if (b > c) {//c��Сʱ
			printf("%d%d%d",a,b,c);//��˳��������
		}
		else if (c > b) {//b��Сʱ
			printf("%d%d%d",a,c,b);//��˳��������
		}
	}
	if (b > a && b > c) {//b���ʱ
		if (a>c) {//c��Сʱ
			printf("%d%d%d",b,a,c);//��˳��������
		}
		else if (c>a) {//a��Сʱ
			printf("%d%d%d",b,c,a);//��˳��������
		}
	}
	if (c>a&&c>b) {//c���ʱ
		if (b>a) {//a��Сʱ
			printf("%d%d%d",c,b,a);//��˳��������
		}
		else if (a>b) {//b��Сʱ
			printf("%d%d%d",c,a,b);//��˳��������
		}
	}
	return 0;
}
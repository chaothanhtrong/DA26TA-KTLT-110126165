#include<stdio.h>

int main()
{
	int a, b;
	
	printf("nhap a: ");
	scanf("%d", &a);
	printf("\nnhap b: ");
	scanf("%d", &b);
	
	int tong, hieu, tich, thuong;
	
	tong = a + b;
	printf("\ntong = %d", tong);
	
	hieu = a - b;
	printf("\nhieu = %d", hieu);
	
	tich = a * b;
	printf("\ntich = %d", tich);
	
	thuong = a / b;
	printf("\nthuong = %d", thuong);
}

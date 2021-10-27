#include<stdio.h>
int tong(int a, int b){
	return a+b;
}
int main(){
	int a, b;
	printf("Nhap a va b: ");
	scanf("%d%d", &a, &b);
	printf("%d + %d = %d\n", a, b, tong(a, b));
	printf("%d x %d = %d", a, b, a*b);
	return 0;
}

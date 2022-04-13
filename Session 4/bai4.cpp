#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(n>10){
		n=n/10;
	}
	printf("So dau tien cua n la : %d",n);
}

#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(int t=0;n>0;n/=10){
		t=t+n%10;
		printf("Tong cac chu so cua n = %d",t);
	}
}

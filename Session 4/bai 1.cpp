#include<stdio.h>
int main(){
	int n;
	printf("Nhap n =");
	scanf("%d", &n);
	int t=0;
	printf("Cac uoc cua n la : ");
	for(int i=1;i<n;i++){
		if(n%i==0){
			t=t+i;
			printf("%d ",i);
		}
	}printf("\nTong cac uoc cua n = %d",t);
}

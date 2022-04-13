#include<stdio.h>
int main(){
	int n,s;
	printf("Nhap n= ");
	scanf("%d", &n);
	for(int i=1;i<n;i++){
		int L=n&i;
		if(L==0){
			printf("&d",i);
			s=s+i;
			printf("&d",s);
		}
	}
}
	

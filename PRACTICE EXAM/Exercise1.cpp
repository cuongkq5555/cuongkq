#include<stdio.h>

int main(){
	int n;
	float s=0;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(n<1){
		printf("Loi, Vui long nhap lai");
	}else{
		for(int i=1;i<=n;i++){
		s=s+1/(float)i;	
		}
		printf("Sum = %f", s );		
	}
	
}

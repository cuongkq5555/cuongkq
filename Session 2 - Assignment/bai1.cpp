#include<stdio.h>
int main(){
	int N;
	printf("Nhap N=");
	scanf("%d", &N);
	if(N==8){
		printf("Day la Chu Nhat");
	}else{
		if((N>1)&&(N<8)){
			printf("Day la thu %d",N);
		}
		else{
			printf("Khong phai ngay trong tuan");
		}
	}
	
	
	
}

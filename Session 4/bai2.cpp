#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a =");
	scanf("%d", &a);
	printf("Nhap b =");
	scanf("%d", &b);
	for(int i=a-1;i>0;i--){
		if(a%i==0){
			if(b%i==0){
				printf("Uoc chung lon nhat cua a va b la :%d\n",i);
				int x=a*b/i;
				printf("Boi chung nho nhat cua a va b la : %d",x);
				break;
			}
		}	
	}
}

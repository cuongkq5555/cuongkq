#include <stdio.h>
int main(){
	int	n;
	int A;
	printf("nhap n=");
	scanf("%d",&n);
	while (n>10){
		A= n%10;
	
		n=n/10;
	}
	if(A%2!=0&&n%2!=0){
		printf("n toan so le");
	
	}else{
		printf("n khong phai toan so le");	
	}
}

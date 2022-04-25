#include <stdio.h>

int main(){
	printf("nhap so n:");
	int n;
	scanf("%d",&n);
	int i=1;
	int A=0;
	while(i<n){
	if(n%i==0){
	A=A+i;
	}
	i++;	
	}
if(A==n){
	printf("%d la so hoan hao",n);	
}else{
	printf("%d khong phai la so hoan hao",n);	
}
}

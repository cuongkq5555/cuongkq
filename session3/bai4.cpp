#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
	printf("nhap so n:");
	int n;
	scanf("%d",&n);
		printf("cac so hoan hao be hon %d la:",n);
	int m=2;

;
	while(m<n){
		int i=1;
			int A=0;
//	printf("so m: %d ",m);
	while(i<m){
//			printf("so i: %d ",i);
	if(m%i==0){
	A=A+i;
//		printf("so A: %d ",A);
	}
	i++;	
	}
	if(A==m){
	printf("%d ",m);	
	}
	m=m+1;
	}

}

#include<stdio.h>
int soMu(int a,int b){
	int s =1;
	for(int i=1;i<=b;i++){
		s=s*a;
	}
	return s;
}

int main(){
	int a=4;
	int b=4;
	int mu= soMu(a,b);
	printf("%d",mu );
}

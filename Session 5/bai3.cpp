#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int i;
	int arr[n];
	for(i=0;i<n;i++){ 	
	printf("Nhap a[%d]",i);
	scanf("%d", &arr[i]);
	}
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
//	bool f = true;
	for(int i=0;i<n;i++){
		if(x==arr[i]){
			printf("x co trong mang");
			break;
		}else{
			printf("x k co trong mang");
			break;
		}
	}
}

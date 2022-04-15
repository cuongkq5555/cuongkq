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
	int t=0,s=0;

	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			t=t +arr[i];
			s=s+1;
			
		}
	}
	float TB=t/s;
	printf("Trung binh cong la :%d",TB);
}


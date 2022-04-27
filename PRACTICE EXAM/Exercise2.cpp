#include<stdio.h>
void inPut(int arr[],int n){
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void outPut(int arr[],int n){
	printf("\nXuat mang:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
int reverseArray (int arr[], int n){
	for(int i=0;i<n/2;i++){
      	int temp=arr[i];
      	arr[i]=arr[n-i-1];
      	arr[n-i-1]=temp;
	}
}


int main () {
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d]", i++);
		scanf("%d", &arr[i]);
	}	
//	int arr[5];
	inPut (arr,n);
	reverseArray(arr,n);
	outPut(arr,n);
  
}
